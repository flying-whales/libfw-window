cmake_minimum_required(VERSION 3.1)
project(libfw_window)

include("cmake/utilities.cmake")
add_subdirectory("lib")

# select platform specific native source files
if(WIN32)
    set(libfw_window_native_src_files
        "src/window_win.cpp"
    )
else()
    message(FATAL_ERROR "Platform not supported by library")
endif()

set(libfw_window_src_files
    ${libfw_window_native_src_files}
)

set(libfw_window_include_dir "include")

fw_process_src_files(${libfw_window_src_files})
fw_get_include_files(${libfw_window_include_dir} libfw_window_include_files)
fw_process_include_files(${libfw_window_include_files})

add_library(fw_window ${libfw_window_src_files} ${libfw_window_include_files})
fw_process_assembly(fw_window)
target_include_directories(fw_window PUBLIC ${libfw_window_include_dir})

target_link_libraries(fw_window fw_maths)