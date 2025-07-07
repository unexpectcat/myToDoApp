#pragma once

#include "imgui.h"

namespace FontManager {
    extern ImFont* inter_font;
    extern ImFont* icon_font;

    extern float main_scale;


    void BuildFont();
    void LoadFonts(); // Call this once during initialization


}
