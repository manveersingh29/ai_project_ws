# Install script for directory: /home/manveer/ai_project_ws/src

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/home/manveer/ai_project_ws/install")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

# Install shared libraries without execute permission?
if(NOT DEFINED CMAKE_INSTALL_SO_NO_EXE)
  set(CMAKE_INSTALL_SO_NO_EXE "1")
endif()

# Is this installation the result of a crosscompile?
if(NOT DEFINED CMAKE_CROSSCOMPILING)
  set(CMAKE_CROSSCOMPILING "FALSE")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  
      if (NOT EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}")
        file(MAKE_DIRECTORY "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}")
      endif()
      if (NOT EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/.catkin")
        file(WRITE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/.catkin" "")
      endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/home/manveer/ai_project_ws/install/_setup_util.py")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
file(INSTALL DESTINATION "/home/manveer/ai_project_ws/install" TYPE PROGRAM FILES "/home/manveer/ai_project_ws/build/catkin_generated/installspace/_setup_util.py")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/home/manveer/ai_project_ws/install/env.sh")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
file(INSTALL DESTINATION "/home/manveer/ai_project_ws/install" TYPE PROGRAM FILES "/home/manveer/ai_project_ws/build/catkin_generated/installspace/env.sh")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/home/manveer/ai_project_ws/install/setup.bash;/home/manveer/ai_project_ws/install/local_setup.bash")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
file(INSTALL DESTINATION "/home/manveer/ai_project_ws/install" TYPE FILE FILES
    "/home/manveer/ai_project_ws/build/catkin_generated/installspace/setup.bash"
    "/home/manveer/ai_project_ws/build/catkin_generated/installspace/local_setup.bash"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/home/manveer/ai_project_ws/install/setup.sh;/home/manveer/ai_project_ws/install/local_setup.sh")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
file(INSTALL DESTINATION "/home/manveer/ai_project_ws/install" TYPE FILE FILES
    "/home/manveer/ai_project_ws/build/catkin_generated/installspace/setup.sh"
    "/home/manveer/ai_project_ws/build/catkin_generated/installspace/local_setup.sh"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/home/manveer/ai_project_ws/install/setup.zsh;/home/manveer/ai_project_ws/install/local_setup.zsh")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
file(INSTALL DESTINATION "/home/manveer/ai_project_ws/install" TYPE FILE FILES
    "/home/manveer/ai_project_ws/build/catkin_generated/installspace/setup.zsh"
    "/home/manveer/ai_project_ws/build/catkin_generated/installspace/local_setup.zsh"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/home/manveer/ai_project_ws/install/.rosinstall")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
file(INSTALL DESTINATION "/home/manveer/ai_project_ws/install" TYPE FILE FILES "/home/manveer/ai_project_ws/build/catkin_generated/installspace/.rosinstall")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for each subdirectory.
  include("/home/manveer/ai_project_ws/build/gtest/cmake_install.cmake")
  include("/home/manveer/ai_project_ws/build/geometry2/geometry2/cmake_install.cmake")
  include("/home/manveer/ai_project_ws/build/iai_kinect2_opencv4/iai_kinect2/cmake_install.cmake")
  include("/home/manveer/ai_project_ws/build/image_pipeline/image_pipeline/cmake_install.cmake")
  include("/home/manveer/ai_project_ws/build/rtabmap_ros/rtabmap_launch/cmake_install.cmake")
  include("/home/manveer/ai_project_ws/build/rtabmap_ros/rtabmap_ros/cmake_install.cmake")
  include("/home/manveer/ai_project_ws/build/geometry2/tf2_msgs/cmake_install.cmake")
  include("/home/manveer/ai_project_ws/build/geometry2/tf2/cmake_install.cmake")
  include("/home/manveer/ai_project_ws/build/geometry2/tf2_bullet/cmake_install.cmake")
  include("/home/manveer/ai_project_ws/build/geometry2/tf2_eigen/cmake_install.cmake")
  include("/home/manveer/ai_project_ws/build/robot/cmake_install.cmake")
  include("/home/manveer/ai_project_ws/build/image_pipeline/camera_calibration/cmake_install.cmake")
  include("/home/manveer/ai_project_ws/build/rtabmap_ros/rtabmap_python/cmake_install.cmake")
  include("/home/manveer/ai_project_ws/build/geometry2/tf2_py/cmake_install.cmake")
  include("/home/manveer/ai_project_ws/build/image_pipeline/image_proc/cmake_install.cmake")
  include("/home/manveer/ai_project_ws/build/image_pipeline/image_publisher/cmake_install.cmake")
  include("/home/manveer/ai_project_ws/build/iai_kinect2_opencv4/kinect2_registration/cmake_install.cmake")
  include("/home/manveer/ai_project_ws/build/rtabmap_ros/rtabmap_msgs/cmake_install.cmake")
  include("/home/manveer/ai_project_ws/build/image_pipeline/image_view/cmake_install.cmake")
  include("/home/manveer/ai_project_ws/build/image_pipeline/stereo_image_proc/cmake_install.cmake")
  include("/home/manveer/ai_project_ws/build/geometry2/tf2_ros/cmake_install.cmake")
  include("/home/manveer/ai_project_ws/build/image_pipeline/depth_image_proc/cmake_install.cmake")
  include("/home/manveer/ai_project_ws/build/iai_kinect2_opencv4/kinect2_bridge/cmake_install.cmake")
  include("/home/manveer/ai_project_ws/build/iai_kinect2_opencv4/kinect2_calibration/cmake_install.cmake")
  include("/home/manveer/ai_project_ws/build/iai_kinect2_opencv4/kinect2_viewer/cmake_install.cmake")
  include("/home/manveer/ai_project_ws/build/geometry2/tf2_geometry_msgs/cmake_install.cmake")
  include("/home/manveer/ai_project_ws/build/image_pipeline/image_rotate/cmake_install.cmake")
  include("/home/manveer/ai_project_ws/build/geometry2/tf2_kdl/cmake_install.cmake")
  include("/home/manveer/ai_project_ws/build/geometry2/test_tf2/cmake_install.cmake")
  include("/home/manveer/ai_project_ws/build/geometry2/tf2_sensor_msgs/cmake_install.cmake")
  include("/home/manveer/ai_project_ws/build/geometry2/tf2_tools/cmake_install.cmake")
  include("/home/manveer/ai_project_ws/build/rtabmap_ros/rtabmap_conversions/cmake_install.cmake")
  include("/home/manveer/ai_project_ws/build/rtabmap_ros/rtabmap_demos/cmake_install.cmake")
  include("/home/manveer/ai_project_ws/build/rtabmap_ros/rtabmap_examples/cmake_install.cmake")
  include("/home/manveer/ai_project_ws/build/rtabmap_ros/rtabmap_legacy/cmake_install.cmake")
  include("/home/manveer/ai_project_ws/build/rtabmap_ros/rtabmap_sync/cmake_install.cmake")
  include("/home/manveer/ai_project_ws/build/rtabmap_ros/rtabmap_util/cmake_install.cmake")
  include("/home/manveer/ai_project_ws/build/rtabmap_ros/rtabmap_odom/cmake_install.cmake")
  include("/home/manveer/ai_project_ws/build/rtabmap_ros/rtabmap_slam/cmake_install.cmake")
  include("/home/manveer/ai_project_ws/build/rtabmap_ros/rtabmap_viz/cmake_install.cmake")
  include("/home/manveer/ai_project_ws/build/rtabmap_ros/rtabmap_rviz_plugins/cmake_install.cmake")
  include("/home/manveer/ai_project_ws/build/rtabmap_ros/rtabmap_costmap_plugins/cmake_install.cmake")

endif()

if(CMAKE_INSTALL_COMPONENT)
  set(CMAKE_INSTALL_MANIFEST "install_manifest_${CMAKE_INSTALL_COMPONENT}.txt")
else()
  set(CMAKE_INSTALL_MANIFEST "install_manifest.txt")
endif()

string(REPLACE ";" "\n" CMAKE_INSTALL_MANIFEST_CONTENT
       "${CMAKE_INSTALL_MANIFEST_FILES}")
file(WRITE "/home/manveer/ai_project_ws/build/${CMAKE_INSTALL_MANIFEST}"
     "${CMAKE_INSTALL_MANIFEST_CONTENT}")
