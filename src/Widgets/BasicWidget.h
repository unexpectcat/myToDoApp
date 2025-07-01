#pragma once
#include "nlohmann/json.hpp"
#include "../ColorPalettes.h"
#include "imgui.h"


using json = nlohmann::json;

using namespace ImGui;

class BasicWidget
{
	public:
		int width;
		int height;
		json content;

		BasicWidget(int width, int height)
		{
			this->width = width;
			this->height = height;
		}

		BasicWidget(int width, int height, json content)
		{
			this->width = width;
			this->height = height;
			this->content = content;
		}

		struct ColorPalete
		{
			ImU32 background = IM_COL32(54, 48, 98, 255);
			ImU32 panel = IM_COL32(248, 250, 253, 255);
			ImU32 contrast = IM_COL32(249, 148, 23, 255);
			ImU32 field = IM_COL32(245, 245, 245, 255);
		} ColorPalete;

		virtual void DisplayWidget(int x, int y)
		{
			PushStyleVar(ImGuiStyleVar_WindowRounding, 8.0f); // More rounded corners
			PushStyleVar(ImGuiStyleVar_FrameRounding, 6.0f); // Rounded buttons
			PushStyleColor(ImGuiCol_TitleBg, ColorPalete.contrast);
			PushStyleColor(ImGuiCol_WindowBg, ColorPalete.background); // Dark blue background

			PushStyleColor(ImGuiCol_Button, ImVec4(0.2f, 0.4f, 0.6f, 1.0f)); // Blue button
			Begin("Test widget");
			Text("Hello");
			End();
			PopStyleColor(3); // Pop WindowBg and Button colors
			PopStyleVar(2);
		}
};

