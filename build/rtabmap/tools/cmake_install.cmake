# Install script for directory: /root/Pose_waypointmaker/src/rtabmap/tools

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/root/Pose_waypointmaker/install/rtabmap")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "Release")
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

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for each subdirectory.
  include("/root/Pose_waypointmaker/build/rtabmap/tools/ConsoleApp/cmake_install.cmake")
  include("/root/Pose_waypointmaker/build/rtabmap/tools/ImagesJoiner/cmake_install.cmake")
  include("/root/Pose_waypointmaker/build/rtabmap/tools/ExtractObject/cmake_install.cmake")
  include("/root/Pose_waypointmaker/build/rtabmap/tools/Camera/cmake_install.cmake")
  include("/root/Pose_waypointmaker/build/rtabmap/tools/StereoEval/cmake_install.cmake")
  include("/root/Pose_waypointmaker/build/rtabmap/tools/KittiDataset/cmake_install.cmake")
  include("/root/Pose_waypointmaker/build/rtabmap/tools/RgbdDataset/cmake_install.cmake")
  include("/root/Pose_waypointmaker/build/rtabmap/tools/EurocDataset/cmake_install.cmake")
  include("/root/Pose_waypointmaker/build/rtabmap/tools/Recovery/cmake_install.cmake")
  include("/root/Pose_waypointmaker/build/rtabmap/tools/Reprocess/cmake_install.cmake")
  include("/root/Pose_waypointmaker/build/rtabmap/tools/DetectMoreLoopClosures/cmake_install.cmake")
  include("/root/Pose_waypointmaker/build/rtabmap/tools/Export/cmake_install.cmake")
  include("/root/Pose_waypointmaker/build/rtabmap/tools/Report/cmake_install.cmake")
  include("/root/Pose_waypointmaker/build/rtabmap/tools/Info/cmake_install.cmake")
  include("/root/Pose_waypointmaker/build/rtabmap/tools/CleanupLocalGrids/cmake_install.cmake")
  include("/root/Pose_waypointmaker/build/rtabmap/tools/GlobalBundleAdjustment/cmake_install.cmake")
  include("/root/Pose_waypointmaker/build/rtabmap/tools/CameraRGBD/cmake_install.cmake")
  include("/root/Pose_waypointmaker/build/rtabmap/tools/DatabaseViewer/cmake_install.cmake")
  include("/root/Pose_waypointmaker/build/rtabmap/tools/EpipolarGeometry/cmake_install.cmake")
  include("/root/Pose_waypointmaker/build/rtabmap/tools/OdometryViewer/cmake_install.cmake")
  include("/root/Pose_waypointmaker/build/rtabmap/tools/DataRecorder/cmake_install.cmake")
  include("/root/Pose_waypointmaker/build/rtabmap/tools/Calibration/cmake_install.cmake")
  include("/root/Pose_waypointmaker/build/rtabmap/tools/Matcher/cmake_install.cmake")

endif()

