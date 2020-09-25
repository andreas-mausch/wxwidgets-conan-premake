include("conanbuildinfo.premake.lua")

workspace("WxWidgetsConanPremake")
    conan_basic_setup()

    project "WxWidgetsConanPremake"
        kind "WindowedApp"
        language "C++"
        targetdir "bin/%{cfg.buildcfg}"

        linkoptions { conan_exelinkflags }

        files { "**.h", "**.cpp" }

        filter "configurations:Debug"
        defines { "DEBUG" }
        symbols "On"

        filter "configurations:Release"
        defines { "NDEBUG" }
        optimize "On"

        filter "system:Windows"
        toolset "v141_xp"
        staticruntime "On"
