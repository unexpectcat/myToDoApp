#include "Style.h"
#include "imgui.h"
#include "imgui_impl_glfw.h"
#include <GLFW/glfw3.h>






void BuildStyle()
{
    float main_scale = ImGui_ImplGlfw_GetContentScaleForMonitor(glfwGetPrimaryMonitor());
    ImGuiStyle& style = ImGui::GetStyle();
    style.ScaleAllSizes(main_scale);
    style.FontScaleDpi = main_scale;
    //style.WindowRounding = 4.0f; // Set corner radius for buttons, sliders, etc. (in pixels)
    style.ScaleAllSizes(main_scale);
    
    
    

    
}


ColorPalete light_color_palete = {
    ImVec4(0.267f, 0.278f, 0.275f, 1.0f), // #444746 (text_color)
    ImVec4(0.961f, 0.961f, 0.961f, 1.0f), // #f5f5f5 (background)
    ImVec4(0.973f, 0.980f, 0.992f, 1.0f), // #f8fafd (panel)
    ImVec4(0.976f, 0.580f, 0.090f, 1.0f), // #f99417 (field)
    ImVec4(1.0f, 0.827f, 0.502f, 1.0f),   // #ffd380 (contrast)
    ImVec4(0.541f, 0.314f, 0.561f, 1.0f), // #8a508f (Task1)
    ImVec4(0.737f, 0.314f, 0.565f, 1.0f), // #bc5090 (Task2)
    ImVec4(1.0f, 0.388f, 0.380f, 1.0f),   // #ff6361 (Task3)
    ImVec4(1.0f, 0.522f, 0.192f, 1.0f),   // #ff8531 (Task4)
    ImVec4(1.0f, 0.651f, 0.0f, 1.0f)      // #ffa600 (Task5)
};

ColorPalete dark_color_palete = {
    ImVec4(0.663f, 0.667f, 0.690f, 1.0f), // #f5f5f5 (text_color)
    ImVec4(0.110f, 0.110f, 0.110f, 1.0f),   // #00202e (background)
    ImVec4(0.141f, 0.141f, 0.141f, 1.0f), //MenuBarBg
    ImVec4(0.427f, 0.447f, 0.471f, 1.0f),   // #003f5c (panel)
    ImVec4(0.173f, 0.282f, 0.459f, 1.0f), // #2c4875 (field)
    ImVec4(1.0f, 0.827f, 0.502f, 1.0f),   // #ffd380 (contrast)
    ImVec4(0.541f, 0.314f, 0.561f, 1.0f), // #8a508f (Task1)
    ImVec4(0.737f, 0.314f, 0.565f, 1.0f), // #bc5090 (Task2)
    ImVec4(1.0f, 0.388f, 0.380f, 1.0f),   // #ff6361 (Task3)
    ImVec4(1.0f, 0.522f, 0.192f, 1.0f),   // #ff8531 (Task4)
    ImVec4(1.0f, 0.651f, 0.0f, 1.0f)      // #ffa600 (Task5)
};

ColorPalete color_palete = light_color_palete;

void SetDarkMode()
{
	color_palete = dark_color_palete;
    ImGui::StyleColorsDark();

   
}

void SetLightMode()
{
    color_palete = light_color_palete;
}
