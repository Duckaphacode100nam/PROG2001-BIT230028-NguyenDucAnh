cmake_minimum_required(VERSION 4.2)
project(Tapluyen1Chuong2 CXX)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

file(GLOB_RECURSE all_main_files CONFIGURE_DEPENDS
        "${CMAKE_CURRENT_SOURCE_DIR}/*/main.cpp"
        "${CMAKE_CURRENT_SOURCE_DIR}/*/Main.cpp"
        "${CMAKE_CURRENT_SOURCE_DIR}/*/src/main.cpp"
        "${CMAKE_CURRENT_SOURCE_DIR}/*/src/Main.cpp"
)
list(REMOVE_DUPLICATES all_main_files)

foreach(main_file IN LISTS all_main_files)
    get_filename_component(src_dir "${main_file}" DIRECTORY)
    get_filename_component(src_dir_name "${src_dir}" NAME)

    if(src_dir_name STREQUAL "src")
        get_filename_component(exercise_dir "${src_dir}" DIRECTORY)
    else()
        set(exercise_dir "${src_dir}")
    endif()

    get_filename_component(group_dir "${exercise_dir}" DIRECTORY)
    get_filename_component(exercise_name "${exercise_dir}" NAME)
    get_filename_component(group_name "${group_dir}" NAME)

    set(target_name "${group_name}_${exercise_name}")
    if(NOT TARGET ${target_name})
        add_executable(${target_name} "${main_file}")
    endif()
endforeach()
