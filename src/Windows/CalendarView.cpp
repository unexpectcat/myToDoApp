#include "CalendarView.h"
#include "../Widgets/CalendarWidget.h"

int sidebar_size = 0;

void init_CalendarView()
{
	ImGuiIO& io = ImGui::GetIO();
	sidebar_size = io.DisplaySize.x / 6;

	ImGuiWindowFlags window_flags =
		ImGuiWindowFlags_NoTitleBar |
		ImGuiWindowFlags_NoResize |
		ImGuiWindowFlags_NoMove |
		ImGuiWindowFlags_NoScrollbar |
		ImGuiWindowFlags_NoCollapse |
		ImGuiWindowFlags_NoSavedSettings |
		ImGuiWindowFlags_NoBringToFrontOnFocus |
		ImGuiWindowFlags_MenuBar |
		ImGuiWindowFlags_NoBackground;

	PushStyleColor(ImGuiCol_Text, color_palete.text_color);
	PushStyleColor(ImGuiCol_MenuBarBg, color_palete.MenuBarBg);
	PushStyleColor(ImGuiCol_ChildBg, color_palete.background);
	PushStyleColor(ImGuiCol_Button, ImVec4(0.2f, 0.4f, 0.6f, 1.0f));

	SetNextWindowPos(ImVec2(0, 0));
	SetNextWindowSize(io.DisplaySize);
	
	Begin("Calendar view", nullptr, window_flags);


	if (BeginMenuBar()) {
		ImGui::PushFont(FontManager::icon_font);
		if (Button("Q")) { 
			// Handle button click
		}
		PopFont();
		
		if (BeginMenu("File")) {
			if (MenuItem("Open")) {
				// Handle open
			}
			if (MenuItem("Save")) {
				// Handle save
			}
			EndMenu();
		}

		if (BeginMenu("Edit")) {
			if (MenuItem("Undo", "Ctrl+Z")) {
				// Handle undo
			}
			if (MenuItem("Redo", "Ctrl+Y")) {
				// Handle redo
			}
			EndMenu();
		}

		EndMenuBar();
	}
	
	

	


	SetNextWindowPos(ImVec2(0, 0));
	BeginChild("SideBar", ImVec2(sidebar_size, io.DisplaySize.y), false);
		// Get the current ImDrawList for the window
		ImDrawList* draw_list = GetWindowDrawList();

		// Define start and end points of the line (in screen coordinates)
		ImVec2 start_pos = ImVec2(sidebar_size, 50);
		ImVec2 end_pos = ImVec2(sidebar_size, io.DisplaySize.y - 50);

		// Draw a line using a color from light_color_palete (e.g., task3 color: #ff6361)
		draw_list->AddLine(start_pos, end_pos, ColorConvertFloat4ToU32(color_palete.panel), 2.0f);

		// Reserve space in the window to avoid overlapping the line with other widgets
		Dummy(ImVec2(200, 200));
	Text("Sidebar content");
	EndChild();
	End();
	PopStyleColor(4);
	

}
