#include "FontManager.h"
#include "imgui_impl_glfw.h"
#include <GLFW/glfw3.h>
ImFont* FontManager::inter_font = nullptr;
ImFont* FontManager::icon_font = nullptr;
float main_scale = 1;

void FontManager::BuildFont()
{
    float main_scale = ImGui_ImplGlfw_GetContentScaleForMonitor(glfwGetPrimaryMonitor());
    ImGuiStyle& style = ImGui::GetStyle();
    style.ScaleAllSizes(main_scale);
    style.FontScaleDpi = main_scale;
    //style.WindowRounding = 4.0f; // Set corner radius for buttons, sliders, etc. (in pixels)
    style.ScaleAllSizes(main_scale);
}


void FontManager::LoadFonts() {
    ImGuiIO& io = ImGui::GetIO();
    inter_font = io.Fonts->AddFontFromFileTTF("fonts\\static\\Inter_18pt-Regular.ttf", 18.0f * ImGui::GetStyle().FontScaleDpi);
    icon_font = io.Fonts->AddFontFromFileTTF("fonts\\icons\\icon-works-webfont.ttf", 32.0f * ImGui::GetStyle().FontScaleDpi);
}



