#pragma once
#include "imgui.h"


struct ColorPalete
{
	ImU32 background;
	ImU32 panel;
	ImU32 field;
	ImU32 contrast;
	ImU32 Task1;
	ImU32 Task2;
	ImU32 Task3;
	ImU32 Task4;
	ImU32 Task5;
};

void SetDarkMode();
// Declare the global instance (in header)
extern ColorPalete color_palete;
extern ColorPalete dark_color_palete;
extern ColorPalete light_color_palete;
