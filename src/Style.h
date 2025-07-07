#pragma once
#include "imgui.h"
#include "FontManager.h"

struct ColorPalete
{
	ImVec4 text_color;
	ImVec4 background;
	ImVec4 MenuBarBg;
	ImVec4 panel;
	ImVec4 field;
	ImVec4 contrast;
	ImVec4 Task1;
	ImVec4 Task2;
	ImVec4 Task3;
	ImVec4 Task4;
	ImVec4 Task5;
};

void BuildStyle();
void SetDarkMode();
void SetLightMode();
// Declare the global instance (in header)


extern ImGuiStyle& style;
extern ColorPalete color_palete;
extern ColorPalete dark_color_palete;
extern ColorPalete light_color_palete;

extern float main_scale;

