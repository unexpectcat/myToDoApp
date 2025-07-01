#pragma once
#include "imgui.h"


struct ColorPalete
{
	ImU32 background;
	ImU32 panel;
	ImU32 contrast;
	ImU32 field;
};

// Declare the global instance (in header)
extern ColorPalete g_ColorPalete;
