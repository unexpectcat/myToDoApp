#include "FontManager.h"

ImFont* FontManager::inter_font = nullptr;
ImFont* FontManager::icon_font = nullptr;

void FontManager::LoadFonts() {
    ImGuiIO& io = ImGui::GetIO();
    inter_font = io.Fonts->AddFontFromFileTTF("fonts\\static\\Inter_18pt-Regular.ttf", 18.0f);
    icon_font = io.Fonts->AddFontFromFileTTF("fonts\\icons\\icon-works-webfont.ttf", 24.0f);
}
