<<<<<<< HEAD
<<<<<<< HEAD
cmake_minimum_required(VERSION 2.6)
file(TO_CMAKE_PATH "$ENV{IMAGINEPP_ROOT}/CMake" p)
list(APPEND CMAKE_MODULE_PATH "${p}") #For old Imagine++
list(APPEND CMAKE_SYSTEM_FRAMEWORK_PATH /Library/Frameworks) #Mac, why not auto?
find_package(Imagine REQUIRED)

project(MOPSI)
add_executable(MOPSI main.cpp Tree.cpp Tree.h)
ImagineUseModules(MOPSI Graphics)

=======
cmake_minimum_required(VERSION 2.6)
file(TO_CMAKE_PATH "$ENV{IMAGINEPP_ROOT}/CMake" p)
list(APPEND CMAKE_MODULE_PATH "${p}") #For old Imagine++
list(APPEND CMAKE_SYSTEM_FRAMEWORK_PATH /Library/Frameworks) #Mac, why not auto?
find_package(Imagine REQUIRED)

project(MOPSI)
add_executable(MOPSI main.cpp Tree.cpp Tree.h)
ImagineUseModules(MOPSI Graphics)

>>>>>>> f548aa03602e1d806803a0e8f3ad13edeb030929
=======
cmake_minimum_required(VERSION 2.6)
file(TO_CMAKE_PATH "$ENV{IMAGINEPP_ROOT}/CMake" p)
list(APPEND CMAKE_MODULE_PATH "${p}") #For old Imagine++
list(APPEND CMAKE_SYSTEM_FRAMEWORK_PATH /Library/Frameworks) #Mac, why not auto?
find_package(Imagine REQUIRED)

project(MOPSI)
add_executable(MOPSI main.cpp Tree.cpp Tree.h)
ImagineUseModules(MOPSI Graphics)

>>>>>>> f548aa03602e1d806803a0e8f3ad13edeb030929
