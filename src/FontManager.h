#pragma once

#include "imgui.h"

namespace FontManager {
    extern ImFont* inter_font;
    extern ImFont* icon_font;

    void LoadFonts(); // Call this once during initialization
}
