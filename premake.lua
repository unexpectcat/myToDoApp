-- premake5.lua
workspace "ToDoApp"
   architecture "x64"
   configurations { "Debug", "Release", "Dist" }
   startproject "AppWindows"

   -- Workspace-wide build options for MSVC
   filter "system:windows"
      buildoptions { "/EHsc", "/Zc:preprocessor", "/Zc:__cplusplus" }

OutputDir = "%{cfg.system}-%{cfg.architecture}/%{cfg.buildcfg}"

project "AppWindows"
   kind "WindowedApp"
   language "C++"
   cppdialect "C++20"
   targetdir "bin/%{cfg.buildcfg}"
   staticruntime "off"
   
   files { "src/**.h",
   "src/**.cpp",
   "src/**.c",
   "src/**.fs",
   "src/**.vs",
   "src/**.py",
   "external/imgui/**.cpp",
   "external/imgui/backends/**.cpp"
    }
   includedirs { 
    "$(SolutionDir)external\\assimp\\include",
    "$(SolutionDir)external\\glfw\\include",
    "$(SolutionDir)external\\nlohmann\\include",
    "$(SolutionDir)external\\imgui",
    "$(SolutionDir)external\\imgui\\backends",    
    "$(SolutionDir)external\\glad"
   }


   libdirs { "$(SolutionDir)bin" }
   

   
      
   defines
   {
       "_CRT_SECURE_NO_WARNINGS"
   }


   targetdir ("$(SolutionDir)bin/" .. OutputDir .. "/%{prj.name}")
   objdir ("$(SolutionDir)bin/" .. OutputDir .. "/%{prj.name}")

   links {
   "glfw3.lib",
   "opengl32.lib",
   "user32.lib",
   "gdi32.lib",
   "shell32.lib"
   }
   
   filter "system:windows"
       systemversion "latest"
       defines { "WINDOWS" }
    
   filter "configurations:Debug"
       defines { "DEBUG" }
       runtime "Debug"
       symbols "On"
       debugenvs { "PATH=%PATH%;$(SolutionDir)\\bin\\debug" }

   filter "configurations:Release"
       defines { "RELEASE" }
       runtime "Release"
       optimize "On"
       symbols "On"
       debugenvs { "PATH=%PATH%;$(SolutionDir)\\bin\\release" }

   filter "configurations:Dist"
       defines { "DIST" }
       runtime "Release"
       optimize "On"
       symbols "Off"
       debugenvs { "PATH=%PATH%;$(SolutionDir)\\bin\\dist" }