add_library(third_party_lib_catch STATIC
    catch_main.cpp
)
target_include_directories(third_party_lib_catch PUBLIC include)
target_compile_definitions(third_party_lib_catch PUBLIC CATCH_CONFIG_FAST_COMPILE=1)
