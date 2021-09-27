cmake_minimum_required(VERSION 3.0.2)
project(bobi_fishbot_v4_interface)

add_compile_options(-std=c++11)

# file(GLOB INTERFACE_SOURCES
#     src/*.cpp
# )
# list(FILTER INTERFACE_SOURCES EXCLUDE REGEX "fishbot_interface_node.cpp")

find_package(
    catkin REQUIRED COMPONENTS
    roscpp
    rospy
    geometry_msgs
    sensor_msgs
    bobi_msgs
)

catkin_package(
  CATKIN_DEPENDS bobi_msgs
)

include_directories(
  include
  ${catkin_INCLUDE_DIRS}
)

add_executable(fishbot_v4_interface_node src/fishbot_v4_interface_node.cpp)
target_link_libraries(fishbot_v4_interface_node ${catkin_LIBRARIES})
add_dependencies(fishbot_v4_interface_node ${catkin_EXPORTED_TARGETS} bobi_msgs_generate_messages_cpp)