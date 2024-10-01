cmake_minimum_required(VERSION 3.10)   # 我们需要 CMake 3.10 或更高版本

# 设置 C++ 标准为 C++17
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

# 添加头文件搜索路径
#include_directories(${PROJECT_SOURCE_DIR}/include/animal.h)
include_directories(${CMAKE_SOURCE_DIR}/include*)
# 创建一个库目标 GreeterLib
add_library(AnimalLib src/no1.cpp)

# 创建可执行文件目标 GreetingApp
add_executable(AnimalsInZoo src/no1.cpp)

# 链接库到可执行文件
target_link_libraries(AnimalsInZoo AnimalLib)
