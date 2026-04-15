cmake_minimum_required(VERSION 4.2)
project(Tapluyen1Chuong2 CXX)

set(CMAKE_CXX_STANDARD 11)

file(GLOB chapter_main_files CONFIGURE_DEPENDS
        "${CMAKE_CURRENT_SOURCE_DIR}/Chapter2/*/src/main.cpp"
)

foreach(main_file IN LISTS chapter_main_files)
    get_filename_component(src_dir "${main_file}" DIRECTORY)
    get_filename_component(exercise_dir "${src_dir}" DIRECTORY)
    get_filename_component(target_name "${exercise_dir}" NAME)

    add_executable(${target_name} "${main_file}"
            Tapluyen3Chuong3/ExTwo/src/main.cpp
            Tapluyen3Chuong3/ExTwo/src/main.cpp)
endforeach()
