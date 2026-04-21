cmake_minimum_required(VERSION 4.2)
project(Tapluyen1Chuong2 CXX)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

file(GLOB_RECURSE all_main_files CONFIGURE_DEPENDS
        "${CMAKE_CURRENT_SOURCE_DIR}/*/src/main.cpp"
        "${CMAKE_CURRENT_SOURCE_DIR}/*/src/Main.cpp"
)

foreach(main_file IN LISTS all_main_files)
    get_filename_component(src_dir "${main_file}" DIRECTORY)
    get_filename_component(exercise_dir "${src_dir}" DIRECTORY)
    get_filename_component(group_dir "${exercise_dir}" DIRECTORY)
    get_filename_component(exercise_name "${exercise_dir}" NAME)
    get_filename_component(group_name "${group_dir}" NAME)

    set(target_name "${group_name}_${exercise_name}")
    add_executable(${target_name} "${main_file}"
            Tapluyen7Chuong5/ExFour/src/main.cpp
            Tapluyen7Chuong5/ExFive/src/main.cpp
            Tapluyen7Chuong5/ExSix/src/main.cpp
            Tapluyen7Chuong5/ExSeven/src/src/main.cpp
            Tapluyen7Chuong5/ExEight/src/main.cpp
            Tapluyen7Chuong5/ExNine/src/main.cpp
            Tapluyen7Chuong5/ExTen/src/main.cpp
            LuyenTap8Chuong5/ExOne/src/main.cpp
            LuyenTap8Chuong5/ExTwo/src/main.cpp
            LuyenTap8Chuong5/ExThree/src/main.cpp)
endforeach()
