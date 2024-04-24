# 指定CMake的最低版本要求
cmake_minimum_required(VERSION 3.10)

# 设置项目名称和版本
project(YamlCppExample VERSION 1.0)

# 设置C++标准
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# 查找需要的yaml-cpp库
find_package(yaml-cpp REQUIRED)

# 添加一个可执行文件
add_executable(YamlCppExample yamlcppEg.cpp)

# 链接yaml-cpp库到我们的项目
target_link_libraries(YamlCppExample yaml-cpp)