#pragma once
#include "BasicWidget.h"

class CalendarWidget : public BasicWidget
{
private:
	int sidebar_size = 0;

public:
	// Inherit the (int, int) constructor
	CalendarWidget(int width, int height)
		: BasicWidget(width, height) {}

	// If needed, also inherit the (int, int, json) constructor
	CalendarWidget(int width, int height, json content)
		: BasicWidget(width, height, content) {}

	void DisplayWidget(int x, int y) override
	{
		ImGuiIO& io = ImGui::GetIO();
		//PushStyleVar(ImGuiStyleVar_WindowRounding, 48.0f); // More rounded corners
		//PushStyleVar(ImGuiStyleVar_FrameRounding, 46.0f); // Rounded buttons
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

		PushStyleColor(ImGuiCol_TitleBg, g_ColorPalete.contrast);
		PushStyleColor(ImGuiCol_ChildBg, ImVec4(0.2f, 0.4f, 0.6f, 1.0f));
		PushStyleColor(ImGuiCol_Button, ImVec4(0.2f, 0.4f, 0.6f, 1.0f));

		ImGui::SetNextWindowPos(ImVec2(0, 0));
		ImGui::SetNextWindowSize(io.DisplaySize);
		Begin("Calendar view", nullptr, window_flags);

		if (ImGui::BeginMenuBar()) {
			if (ImGui::BeginMenu("File")) {
				if (ImGui::MenuItem("Open")) {
					// Handle open
				}
				if (ImGui::MenuItem("Save")) {
					// Handle save
				}
				ImGui::EndMenu();
			}

			if (ImGui::BeginMenu("Edit")) {
				if (ImGui::MenuItem("Undo", "Ctrl+Z")) {
					// Handle undo
				}
				if (ImGui::MenuItem("Redo", "Ctrl+Y")) {
					// Handle redo
				}
				ImGui::EndMenu();
			}

			ImGui::EndMenuBar();
		}


		ImGui::SetNextWindowPos(ImVec2(0, 0));
		BeginChild("SideBar", ImVec2(sidebar_size, io.DisplaySize.y), false);
		ImGui::Text("Sidebar content");
		EndChild();
		End();
		PopStyleColor(3); 
	}
};

