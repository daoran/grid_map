cmake_minimum_required(VERSION 3.5.1)
project(grid_map_msgs)

if("$ENV{ROS_VERSION}" STREQUAL "1")

## Find catkin macros and libraries
find_package(catkin REQUIRED COMPONENTS
  std_msgs
  geometry_msgs
  message_generation
)

#######################################
## Declare ROS messages and services ##
#######################################

## Generate messages in the 'msg' folder
add_message_files(
  FILES
  GridMapInfo.msg
  GridMap.msg
)

## Generate services in the 'srv' folder
add_service_files(
  FILES
  SetGridMap.srv
  GetGridMap.srv
  GetGridMapInfo.srv
  ProcessFile.srv
)

## Generate added messages and services with any dependencies listed here
generate_messages(
  DEPENDENCIES
  std_msgs
  geometry_msgs
)

###################################
## catkin specific configuration ##
###################################
## The catkin_package macro generates cmake config files for your package
## Declare things to be passed to dependent projects
## INCLUDE_DIRS: uncomment this if you package contains header files
## LIBRARIES: libraries you create in this project that dependent projects also need
## CATKIN_DEPENDS: catkin_packages dependent projects also need
## DEPENDS: system dependencies of this project that dependent projects also need

catkin_package(
    CATKIN_DEPENDS
        geometry_msgs
        message_runtime
        std_msgs
    #DEPENDS
)

else() # ROS version 2

set(PACKAGE_DEPENDENCIES
  geometry_msgs
  std_msgs
)

find_package(ament_cmake REQUIRED)
find_package(rosidl_default_generators REQUIRED)
foreach(PKG IN LISTS PACKAGE_DEPENDENCIES)
  find_package(${PKG} REQUIRED)
endforeach()

rosidl_generate_interfaces(${PROJECT_NAME}
  "msg/GridMapInfo.msg"
  "msg/GridMap.msg"
  "srv/SetGridMap.srv"
  "srv/GetGridMap.srv"
  "srv/GetGridMapInfo.srv"
  "srv/ProcessFile.srv"
  DEPENDENCIES ${PACKAGE_DEPENDENCIES}
)

ament_export_dependencies(rosidl_default_runtime)

ament_package()

endif()
