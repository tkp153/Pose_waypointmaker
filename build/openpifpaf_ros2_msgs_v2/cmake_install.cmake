# Install script for directory: /root/Pose_waypointmaker/src/openpifpaf_ros2_msgs_v2

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/root/Pose_waypointmaker/install/openpifpaf_ros2_msgs_v2")
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
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ament_index/resource_index/rosidl_interfaces" TYPE FILE FILES "/root/Pose_waypointmaker/build/openpifpaf_ros2_msgs_v2/ament_cmake_index/share/ament_index/resource_index/rosidl_interfaces/openpifpaf_ros2_msgs_v2")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/openpifpaf_ros2_msgs_v2" TYPE DIRECTORY FILES "/root/Pose_waypointmaker/build/openpifpaf_ros2_msgs_v2/rosidl_generator_c/openpifpaf_ros2_msgs_v2/" REGEX "/[^/]*\\.h$")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/openpifpaf_ros2_msgs_v2/environment" TYPE FILE FILES "/opt/ros/foxy/lib/python3.8/site-packages/ament_package/template/environment_hook/library_path.sh")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/openpifpaf_ros2_msgs_v2/environment" TYPE FILE FILES "/root/Pose_waypointmaker/build/openpifpaf_ros2_msgs_v2/ament_cmake_environment_hooks/library_path.dsv")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libopenpifpaf_ros2_msgs_v2__rosidl_generator_c.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libopenpifpaf_ros2_msgs_v2__rosidl_generator_c.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libopenpifpaf_ros2_msgs_v2__rosidl_generator_c.so"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES "/root/Pose_waypointmaker/build/openpifpaf_ros2_msgs_v2/libopenpifpaf_ros2_msgs_v2__rosidl_generator_c.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libopenpifpaf_ros2_msgs_v2__rosidl_generator_c.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libopenpifpaf_ros2_msgs_v2__rosidl_generator_c.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libopenpifpaf_ros2_msgs_v2__rosidl_generator_c.so"
         OLD_RPATH "/opt/ros/foxy/lib:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libopenpifpaf_ros2_msgs_v2__rosidl_generator_c.so")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/openpifpaf_ros2_msgs_v2" TYPE DIRECTORY FILES "/root/Pose_waypointmaker/build/openpifpaf_ros2_msgs_v2/rosidl_typesupport_fastrtps_c/openpifpaf_ros2_msgs_v2/" REGEX "/[^/]*\\.cpp$" EXCLUDE)
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libopenpifpaf_ros2_msgs_v2__rosidl_typesupport_fastrtps_c.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libopenpifpaf_ros2_msgs_v2__rosidl_typesupport_fastrtps_c.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libopenpifpaf_ros2_msgs_v2__rosidl_typesupport_fastrtps_c.so"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES "/root/Pose_waypointmaker/build/openpifpaf_ros2_msgs_v2/libopenpifpaf_ros2_msgs_v2__rosidl_typesupport_fastrtps_c.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libopenpifpaf_ros2_msgs_v2__rosidl_typesupport_fastrtps_c.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libopenpifpaf_ros2_msgs_v2__rosidl_typesupport_fastrtps_c.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libopenpifpaf_ros2_msgs_v2__rosidl_typesupport_fastrtps_c.so"
         OLD_RPATH "/opt/ros/foxy/lib:/root/Pose_waypointmaker/build/openpifpaf_ros2_msgs_v2:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libopenpifpaf_ros2_msgs_v2__rosidl_typesupport_fastrtps_c.so")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/openpifpaf_ros2_msgs_v2" TYPE DIRECTORY FILES "/root/Pose_waypointmaker/build/openpifpaf_ros2_msgs_v2/rosidl_typesupport_fastrtps_cpp/openpifpaf_ros2_msgs_v2/" REGEX "/[^/]*\\.cpp$" EXCLUDE)
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libopenpifpaf_ros2_msgs_v2__rosidl_typesupport_fastrtps_cpp.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libopenpifpaf_ros2_msgs_v2__rosidl_typesupport_fastrtps_cpp.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libopenpifpaf_ros2_msgs_v2__rosidl_typesupport_fastrtps_cpp.so"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES "/root/Pose_waypointmaker/build/openpifpaf_ros2_msgs_v2/libopenpifpaf_ros2_msgs_v2__rosidl_typesupport_fastrtps_cpp.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libopenpifpaf_ros2_msgs_v2__rosidl_typesupport_fastrtps_cpp.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libopenpifpaf_ros2_msgs_v2__rosidl_typesupport_fastrtps_cpp.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libopenpifpaf_ros2_msgs_v2__rosidl_typesupport_fastrtps_cpp.so"
         OLD_RPATH "/opt/ros/foxy/lib:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libopenpifpaf_ros2_msgs_v2__rosidl_typesupport_fastrtps_cpp.so")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/openpifpaf_ros2_msgs_v2" TYPE DIRECTORY FILES "/root/Pose_waypointmaker/build/openpifpaf_ros2_msgs_v2/rosidl_typesupport_introspection_c/openpifpaf_ros2_msgs_v2/" REGEX "/[^/]*\\.h$")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libopenpifpaf_ros2_msgs_v2__rosidl_typesupport_introspection_c.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libopenpifpaf_ros2_msgs_v2__rosidl_typesupport_introspection_c.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libopenpifpaf_ros2_msgs_v2__rosidl_typesupport_introspection_c.so"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES "/root/Pose_waypointmaker/build/openpifpaf_ros2_msgs_v2/libopenpifpaf_ros2_msgs_v2__rosidl_typesupport_introspection_c.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libopenpifpaf_ros2_msgs_v2__rosidl_typesupport_introspection_c.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libopenpifpaf_ros2_msgs_v2__rosidl_typesupport_introspection_c.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libopenpifpaf_ros2_msgs_v2__rosidl_typesupport_introspection_c.so"
         OLD_RPATH "/root/Pose_waypointmaker/build/openpifpaf_ros2_msgs_v2:/opt/ros/foxy/lib:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libopenpifpaf_ros2_msgs_v2__rosidl_typesupport_introspection_c.so")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libopenpifpaf_ros2_msgs_v2__rosidl_typesupport_c.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libopenpifpaf_ros2_msgs_v2__rosidl_typesupport_c.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libopenpifpaf_ros2_msgs_v2__rosidl_typesupport_c.so"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES "/root/Pose_waypointmaker/build/openpifpaf_ros2_msgs_v2/libopenpifpaf_ros2_msgs_v2__rosidl_typesupport_c.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libopenpifpaf_ros2_msgs_v2__rosidl_typesupport_c.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libopenpifpaf_ros2_msgs_v2__rosidl_typesupport_c.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libopenpifpaf_ros2_msgs_v2__rosidl_typesupport_c.so"
         OLD_RPATH "/opt/ros/foxy/lib:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libopenpifpaf_ros2_msgs_v2__rosidl_typesupport_c.so")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/openpifpaf_ros2_msgs_v2" TYPE DIRECTORY FILES "/root/Pose_waypointmaker/build/openpifpaf_ros2_msgs_v2/rosidl_generator_cpp/openpifpaf_ros2_msgs_v2/" REGEX "/[^/]*\\.hpp$")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/openpifpaf_ros2_msgs_v2" TYPE DIRECTORY FILES "/root/Pose_waypointmaker/build/openpifpaf_ros2_msgs_v2/rosidl_typesupport_introspection_cpp/openpifpaf_ros2_msgs_v2/" REGEX "/[^/]*\\.hpp$")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libopenpifpaf_ros2_msgs_v2__rosidl_typesupport_introspection_cpp.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libopenpifpaf_ros2_msgs_v2__rosidl_typesupport_introspection_cpp.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libopenpifpaf_ros2_msgs_v2__rosidl_typesupport_introspection_cpp.so"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES "/root/Pose_waypointmaker/build/openpifpaf_ros2_msgs_v2/libopenpifpaf_ros2_msgs_v2__rosidl_typesupport_introspection_cpp.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libopenpifpaf_ros2_msgs_v2__rosidl_typesupport_introspection_cpp.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libopenpifpaf_ros2_msgs_v2__rosidl_typesupport_introspection_cpp.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libopenpifpaf_ros2_msgs_v2__rosidl_typesupport_introspection_cpp.so"
         OLD_RPATH "/opt/ros/foxy/lib:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libopenpifpaf_ros2_msgs_v2__rosidl_typesupport_introspection_cpp.so")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libopenpifpaf_ros2_msgs_v2__rosidl_typesupport_cpp.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libopenpifpaf_ros2_msgs_v2__rosidl_typesupport_cpp.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libopenpifpaf_ros2_msgs_v2__rosidl_typesupport_cpp.so"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES "/root/Pose_waypointmaker/build/openpifpaf_ros2_msgs_v2/libopenpifpaf_ros2_msgs_v2__rosidl_typesupport_cpp.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libopenpifpaf_ros2_msgs_v2__rosidl_typesupport_cpp.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libopenpifpaf_ros2_msgs_v2__rosidl_typesupport_cpp.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libopenpifpaf_ros2_msgs_v2__rosidl_typesupport_cpp.so"
         OLD_RPATH "/opt/ros/foxy/lib:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libopenpifpaf_ros2_msgs_v2__rosidl_typesupport_cpp.so")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/openpifpaf_ros2_msgs_v2/environment" TYPE FILE FILES "/root/Pose_waypointmaker/build/openpifpaf_ros2_msgs_v2/ament_cmake_environment_hooks/pythonpath.sh")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/openpifpaf_ros2_msgs_v2/environment" TYPE FILE FILES "/root/Pose_waypointmaker/build/openpifpaf_ros2_msgs_v2/ament_cmake_environment_hooks/pythonpath.dsv")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/python3.8/site-packages/openpifpaf_ros2_msgs_v2" TYPE FILE FILES "/root/Pose_waypointmaker/build/openpifpaf_ros2_msgs_v2/rosidl_generator_py/openpifpaf_ros2_msgs_v2/__init__.py")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  execute_process(
        COMMAND
        "/usr/bin/python3" "-m" "compileall"
        "/root/Pose_waypointmaker/install/openpifpaf_ros2_msgs_v2/lib/python3.8/site-packages/openpifpaf_ros2_msgs_v2/__init__.py"
      )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/python3.8/site-packages/openpifpaf_ros2_msgs_v2/msg" TYPE DIRECTORY FILES "/root/Pose_waypointmaker/build/openpifpaf_ros2_msgs_v2/rosidl_generator_py/openpifpaf_ros2_msgs_v2/msg/" REGEX "/[^/]*\\.py$")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/python3.8/site-packages/openpifpaf_ros2_msgs_v2/openpifpaf_ros2_msgs_v2_s__rosidl_typesupport_fastrtps_c.cpython-38-x86_64-linux-gnu.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/python3.8/site-packages/openpifpaf_ros2_msgs_v2/openpifpaf_ros2_msgs_v2_s__rosidl_typesupport_fastrtps_c.cpython-38-x86_64-linux-gnu.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/python3.8/site-packages/openpifpaf_ros2_msgs_v2/openpifpaf_ros2_msgs_v2_s__rosidl_typesupport_fastrtps_c.cpython-38-x86_64-linux-gnu.so"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/python3.8/site-packages/openpifpaf_ros2_msgs_v2" TYPE SHARED_LIBRARY FILES "/root/Pose_waypointmaker/build/openpifpaf_ros2_msgs_v2/rosidl_generator_py/openpifpaf_ros2_msgs_v2/openpifpaf_ros2_msgs_v2_s__rosidl_typesupport_fastrtps_c.cpython-38-x86_64-linux-gnu.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/python3.8/site-packages/openpifpaf_ros2_msgs_v2/openpifpaf_ros2_msgs_v2_s__rosidl_typesupport_fastrtps_c.cpython-38-x86_64-linux-gnu.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/python3.8/site-packages/openpifpaf_ros2_msgs_v2/openpifpaf_ros2_msgs_v2_s__rosidl_typesupport_fastrtps_c.cpython-38-x86_64-linux-gnu.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/python3.8/site-packages/openpifpaf_ros2_msgs_v2/openpifpaf_ros2_msgs_v2_s__rosidl_typesupport_fastrtps_c.cpython-38-x86_64-linux-gnu.so"
         OLD_RPATH "/root/Pose_waypointmaker/build/openpifpaf_ros2_msgs_v2/rosidl_generator_py/openpifpaf_ros2_msgs_v2:/root/Pose_waypointmaker/build/openpifpaf_ros2_msgs_v2:/opt/ros/foxy/lib:/opt/ros/foxy/share/std_msgs/cmake/../../../lib:/opt/ros/foxy/share/builtin_interfaces/cmake/../../../lib:/opt/ros/foxy/share/visualization_msgs/cmake/../../../lib:/opt/ros/foxy/share/geometry_msgs/cmake/../../../lib:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/python3.8/site-packages/openpifpaf_ros2_msgs_v2/openpifpaf_ros2_msgs_v2_s__rosidl_typesupport_fastrtps_c.cpython-38-x86_64-linux-gnu.so")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/python3.8/site-packages/openpifpaf_ros2_msgs_v2/openpifpaf_ros2_msgs_v2_s__rosidl_typesupport_introspection_c.cpython-38-x86_64-linux-gnu.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/python3.8/site-packages/openpifpaf_ros2_msgs_v2/openpifpaf_ros2_msgs_v2_s__rosidl_typesupport_introspection_c.cpython-38-x86_64-linux-gnu.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/python3.8/site-packages/openpifpaf_ros2_msgs_v2/openpifpaf_ros2_msgs_v2_s__rosidl_typesupport_introspection_c.cpython-38-x86_64-linux-gnu.so"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/python3.8/site-packages/openpifpaf_ros2_msgs_v2" TYPE SHARED_LIBRARY FILES "/root/Pose_waypointmaker/build/openpifpaf_ros2_msgs_v2/rosidl_generator_py/openpifpaf_ros2_msgs_v2/openpifpaf_ros2_msgs_v2_s__rosidl_typesupport_introspection_c.cpython-38-x86_64-linux-gnu.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/python3.8/site-packages/openpifpaf_ros2_msgs_v2/openpifpaf_ros2_msgs_v2_s__rosidl_typesupport_introspection_c.cpython-38-x86_64-linux-gnu.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/python3.8/site-packages/openpifpaf_ros2_msgs_v2/openpifpaf_ros2_msgs_v2_s__rosidl_typesupport_introspection_c.cpython-38-x86_64-linux-gnu.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/python3.8/site-packages/openpifpaf_ros2_msgs_v2/openpifpaf_ros2_msgs_v2_s__rosidl_typesupport_introspection_c.cpython-38-x86_64-linux-gnu.so"
         OLD_RPATH "/root/Pose_waypointmaker/build/openpifpaf_ros2_msgs_v2/rosidl_generator_py/openpifpaf_ros2_msgs_v2:/root/Pose_waypointmaker/build/openpifpaf_ros2_msgs_v2:/opt/ros/foxy/lib:/opt/ros/foxy/share/std_msgs/cmake/../../../lib:/opt/ros/foxy/share/builtin_interfaces/cmake/../../../lib:/opt/ros/foxy/share/visualization_msgs/cmake/../../../lib:/opt/ros/foxy/share/geometry_msgs/cmake/../../../lib:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/python3.8/site-packages/openpifpaf_ros2_msgs_v2/openpifpaf_ros2_msgs_v2_s__rosidl_typesupport_introspection_c.cpython-38-x86_64-linux-gnu.so")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/python3.8/site-packages/openpifpaf_ros2_msgs_v2/openpifpaf_ros2_msgs_v2_s__rosidl_typesupport_c.cpython-38-x86_64-linux-gnu.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/python3.8/site-packages/openpifpaf_ros2_msgs_v2/openpifpaf_ros2_msgs_v2_s__rosidl_typesupport_c.cpython-38-x86_64-linux-gnu.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/python3.8/site-packages/openpifpaf_ros2_msgs_v2/openpifpaf_ros2_msgs_v2_s__rosidl_typesupport_c.cpython-38-x86_64-linux-gnu.so"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/python3.8/site-packages/openpifpaf_ros2_msgs_v2" TYPE SHARED_LIBRARY FILES "/root/Pose_waypointmaker/build/openpifpaf_ros2_msgs_v2/rosidl_generator_py/openpifpaf_ros2_msgs_v2/openpifpaf_ros2_msgs_v2_s__rosidl_typesupport_c.cpython-38-x86_64-linux-gnu.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/python3.8/site-packages/openpifpaf_ros2_msgs_v2/openpifpaf_ros2_msgs_v2_s__rosidl_typesupport_c.cpython-38-x86_64-linux-gnu.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/python3.8/site-packages/openpifpaf_ros2_msgs_v2/openpifpaf_ros2_msgs_v2_s__rosidl_typesupport_c.cpython-38-x86_64-linux-gnu.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/python3.8/site-packages/openpifpaf_ros2_msgs_v2/openpifpaf_ros2_msgs_v2_s__rosidl_typesupport_c.cpython-38-x86_64-linux-gnu.so"
         OLD_RPATH "/root/Pose_waypointmaker/build/openpifpaf_ros2_msgs_v2/rosidl_generator_py/openpifpaf_ros2_msgs_v2:/root/Pose_waypointmaker/build/openpifpaf_ros2_msgs_v2:/opt/ros/foxy/lib:/opt/ros/foxy/share/std_msgs/cmake/../../../lib:/opt/ros/foxy/share/builtin_interfaces/cmake/../../../lib:/opt/ros/foxy/share/visualization_msgs/cmake/../../../lib:/opt/ros/foxy/share/geometry_msgs/cmake/../../../lib:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/python3.8/site-packages/openpifpaf_ros2_msgs_v2/openpifpaf_ros2_msgs_v2_s__rosidl_typesupport_c.cpython-38-x86_64-linux-gnu.so")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libopenpifpaf_ros2_msgs_v2__python.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libopenpifpaf_ros2_msgs_v2__python.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libopenpifpaf_ros2_msgs_v2__python.so"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES "/root/Pose_waypointmaker/build/openpifpaf_ros2_msgs_v2/rosidl_generator_py/openpifpaf_ros2_msgs_v2/libopenpifpaf_ros2_msgs_v2__python.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libopenpifpaf_ros2_msgs_v2__python.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libopenpifpaf_ros2_msgs_v2__python.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libopenpifpaf_ros2_msgs_v2__python.so"
         OLD_RPATH "/root/Pose_waypointmaker/build/openpifpaf_ros2_msgs_v2:/opt/ros/foxy/share/std_msgs/cmake/../../../lib:/opt/ros/foxy/share/builtin_interfaces/cmake/../../../lib:/opt/ros/foxy/share/visualization_msgs/cmake/../../../lib:/opt/ros/foxy/share/geometry_msgs/cmake/../../../lib:/opt/ros/foxy/lib:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libopenpifpaf_ros2_msgs_v2__python.so")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/openpifpaf_ros2_msgs_v2/msg" TYPE FILE FILES "/root/Pose_waypointmaker/build/openpifpaf_ros2_msgs_v2/rosidl_adapter/openpifpaf_ros2_msgs_v2/msg/Pose.idl")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/openpifpaf_ros2_msgs_v2/msg" TYPE FILE FILES "/root/Pose_waypointmaker/build/openpifpaf_ros2_msgs_v2/rosidl_adapter/openpifpaf_ros2_msgs_v2/msg/Poses.idl")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/openpifpaf_ros2_msgs_v2/msg" TYPE FILE FILES "/root/Pose_waypointmaker/build/openpifpaf_ros2_msgs_v2/rosidl_adapter/openpifpaf_ros2_msgs_v2/msg/Person.idl")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/openpifpaf_ros2_msgs_v2/msg" TYPE FILE FILES "/root/Pose_waypointmaker/build/openpifpaf_ros2_msgs_v2/rosidl_adapter/openpifpaf_ros2_msgs_v2/msg/Pose3D.idl")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/openpifpaf_ros2_msgs_v2/msg" TYPE FILE FILES "/root/Pose_waypointmaker/build/openpifpaf_ros2_msgs_v2/rosidl_adapter/openpifpaf_ros2_msgs_v2/msg/Pose3DArray.idl")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/openpifpaf_ros2_msgs_v2/msg" TYPE FILE FILES "/root/Pose_waypointmaker/build/openpifpaf_ros2_msgs_v2/rosidl_adapter/openpifpaf_ros2_msgs_v2/msg/Transform.idl")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/openpifpaf_ros2_msgs_v2/msg" TYPE FILE FILES "/root/Pose_waypointmaker/build/openpifpaf_ros2_msgs_v2/rosidl_adapter/openpifpaf_ros2_msgs_v2/msg/Transforms.idl")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/openpifpaf_ros2_msgs_v2/msg" TYPE FILE FILES "/root/Pose_waypointmaker/src/openpifpaf_ros2_msgs_v2/msg/Pose.msg")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/openpifpaf_ros2_msgs_v2/msg" TYPE FILE FILES "/root/Pose_waypointmaker/src/openpifpaf_ros2_msgs_v2/msg/Poses.msg")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/openpifpaf_ros2_msgs_v2/msg" TYPE FILE FILES "/root/Pose_waypointmaker/src/openpifpaf_ros2_msgs_v2/msg/Person.msg")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/openpifpaf_ros2_msgs_v2/msg" TYPE FILE FILES "/root/Pose_waypointmaker/src/openpifpaf_ros2_msgs_v2/msg/Pose3D.msg")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/openpifpaf_ros2_msgs_v2/msg" TYPE FILE FILES "/root/Pose_waypointmaker/src/openpifpaf_ros2_msgs_v2/msg/Pose3DArray.msg")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/openpifpaf_ros2_msgs_v2/msg" TYPE FILE FILES "/root/Pose_waypointmaker/src/openpifpaf_ros2_msgs_v2/msg/Transform.msg")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/openpifpaf_ros2_msgs_v2/msg" TYPE FILE FILES "/root/Pose_waypointmaker/src/openpifpaf_ros2_msgs_v2/msg/Transforms.msg")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ament_index/resource_index/package_run_dependencies" TYPE FILE FILES "/root/Pose_waypointmaker/build/openpifpaf_ros2_msgs_v2/ament_cmake_index/share/ament_index/resource_index/package_run_dependencies/openpifpaf_ros2_msgs_v2")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ament_index/resource_index/parent_prefix_path" TYPE FILE FILES "/root/Pose_waypointmaker/build/openpifpaf_ros2_msgs_v2/ament_cmake_index/share/ament_index/resource_index/parent_prefix_path/openpifpaf_ros2_msgs_v2")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/openpifpaf_ros2_msgs_v2/environment" TYPE FILE FILES "/opt/ros/foxy/share/ament_cmake_core/cmake/environment_hooks/environment/ament_prefix_path.sh")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/openpifpaf_ros2_msgs_v2/environment" TYPE FILE FILES "/root/Pose_waypointmaker/build/openpifpaf_ros2_msgs_v2/ament_cmake_environment_hooks/ament_prefix_path.dsv")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/openpifpaf_ros2_msgs_v2/environment" TYPE FILE FILES "/opt/ros/foxy/share/ament_cmake_core/cmake/environment_hooks/environment/path.sh")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/openpifpaf_ros2_msgs_v2/environment" TYPE FILE FILES "/root/Pose_waypointmaker/build/openpifpaf_ros2_msgs_v2/ament_cmake_environment_hooks/path.dsv")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/openpifpaf_ros2_msgs_v2" TYPE FILE FILES "/root/Pose_waypointmaker/build/openpifpaf_ros2_msgs_v2/ament_cmake_environment_hooks/local_setup.bash")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/openpifpaf_ros2_msgs_v2" TYPE FILE FILES "/root/Pose_waypointmaker/build/openpifpaf_ros2_msgs_v2/ament_cmake_environment_hooks/local_setup.sh")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/openpifpaf_ros2_msgs_v2" TYPE FILE FILES "/root/Pose_waypointmaker/build/openpifpaf_ros2_msgs_v2/ament_cmake_environment_hooks/local_setup.zsh")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/openpifpaf_ros2_msgs_v2" TYPE FILE FILES "/root/Pose_waypointmaker/build/openpifpaf_ros2_msgs_v2/ament_cmake_environment_hooks/local_setup.dsv")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/openpifpaf_ros2_msgs_v2" TYPE FILE FILES "/root/Pose_waypointmaker/build/openpifpaf_ros2_msgs_v2/ament_cmake_environment_hooks/package.dsv")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ament_index/resource_index/packages" TYPE FILE FILES "/root/Pose_waypointmaker/build/openpifpaf_ros2_msgs_v2/ament_cmake_index/share/ament_index/resource_index/packages/openpifpaf_ros2_msgs_v2")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/openpifpaf_ros2_msgs_v2/cmake/openpifpaf_ros2_msgs_v2__rosidl_generator_cExport.cmake")
    file(DIFFERENT EXPORT_FILE_CHANGED FILES
         "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/openpifpaf_ros2_msgs_v2/cmake/openpifpaf_ros2_msgs_v2__rosidl_generator_cExport.cmake"
         "/root/Pose_waypointmaker/build/openpifpaf_ros2_msgs_v2/CMakeFiles/Export/share/openpifpaf_ros2_msgs_v2/cmake/openpifpaf_ros2_msgs_v2__rosidl_generator_cExport.cmake")
    if(EXPORT_FILE_CHANGED)
      file(GLOB OLD_CONFIG_FILES "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/openpifpaf_ros2_msgs_v2/cmake/openpifpaf_ros2_msgs_v2__rosidl_generator_cExport-*.cmake")
      if(OLD_CONFIG_FILES)
        message(STATUS "Old export file \"$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/openpifpaf_ros2_msgs_v2/cmake/openpifpaf_ros2_msgs_v2__rosidl_generator_cExport.cmake\" will be replaced.  Removing files [${OLD_CONFIG_FILES}].")
        file(REMOVE ${OLD_CONFIG_FILES})
      endif()
    endif()
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/openpifpaf_ros2_msgs_v2/cmake" TYPE FILE FILES "/root/Pose_waypointmaker/build/openpifpaf_ros2_msgs_v2/CMakeFiles/Export/share/openpifpaf_ros2_msgs_v2/cmake/openpifpaf_ros2_msgs_v2__rosidl_generator_cExport.cmake")
  if("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^()$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/openpifpaf_ros2_msgs_v2/cmake" TYPE FILE FILES "/root/Pose_waypointmaker/build/openpifpaf_ros2_msgs_v2/CMakeFiles/Export/share/openpifpaf_ros2_msgs_v2/cmake/openpifpaf_ros2_msgs_v2__rosidl_generator_cExport-noconfig.cmake")
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/openpifpaf_ros2_msgs_v2/cmake/openpifpaf_ros2_msgs_v2__rosidl_typesupport_introspection_cExport.cmake")
    file(DIFFERENT EXPORT_FILE_CHANGED FILES
         "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/openpifpaf_ros2_msgs_v2/cmake/openpifpaf_ros2_msgs_v2__rosidl_typesupport_introspection_cExport.cmake"
         "/root/Pose_waypointmaker/build/openpifpaf_ros2_msgs_v2/CMakeFiles/Export/share/openpifpaf_ros2_msgs_v2/cmake/openpifpaf_ros2_msgs_v2__rosidl_typesupport_introspection_cExport.cmake")
    if(EXPORT_FILE_CHANGED)
      file(GLOB OLD_CONFIG_FILES "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/openpifpaf_ros2_msgs_v2/cmake/openpifpaf_ros2_msgs_v2__rosidl_typesupport_introspection_cExport-*.cmake")
      if(OLD_CONFIG_FILES)
        message(STATUS "Old export file \"$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/openpifpaf_ros2_msgs_v2/cmake/openpifpaf_ros2_msgs_v2__rosidl_typesupport_introspection_cExport.cmake\" will be replaced.  Removing files [${OLD_CONFIG_FILES}].")
        file(REMOVE ${OLD_CONFIG_FILES})
      endif()
    endif()
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/openpifpaf_ros2_msgs_v2/cmake" TYPE FILE FILES "/root/Pose_waypointmaker/build/openpifpaf_ros2_msgs_v2/CMakeFiles/Export/share/openpifpaf_ros2_msgs_v2/cmake/openpifpaf_ros2_msgs_v2__rosidl_typesupport_introspection_cExport.cmake")
  if("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^()$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/openpifpaf_ros2_msgs_v2/cmake" TYPE FILE FILES "/root/Pose_waypointmaker/build/openpifpaf_ros2_msgs_v2/CMakeFiles/Export/share/openpifpaf_ros2_msgs_v2/cmake/openpifpaf_ros2_msgs_v2__rosidl_typesupport_introspection_cExport-noconfig.cmake")
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/openpifpaf_ros2_msgs_v2/cmake/openpifpaf_ros2_msgs_v2__rosidl_typesupport_cExport.cmake")
    file(DIFFERENT EXPORT_FILE_CHANGED FILES
         "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/openpifpaf_ros2_msgs_v2/cmake/openpifpaf_ros2_msgs_v2__rosidl_typesupport_cExport.cmake"
         "/root/Pose_waypointmaker/build/openpifpaf_ros2_msgs_v2/CMakeFiles/Export/share/openpifpaf_ros2_msgs_v2/cmake/openpifpaf_ros2_msgs_v2__rosidl_typesupport_cExport.cmake")
    if(EXPORT_FILE_CHANGED)
      file(GLOB OLD_CONFIG_FILES "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/openpifpaf_ros2_msgs_v2/cmake/openpifpaf_ros2_msgs_v2__rosidl_typesupport_cExport-*.cmake")
      if(OLD_CONFIG_FILES)
        message(STATUS "Old export file \"$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/openpifpaf_ros2_msgs_v2/cmake/openpifpaf_ros2_msgs_v2__rosidl_typesupport_cExport.cmake\" will be replaced.  Removing files [${OLD_CONFIG_FILES}].")
        file(REMOVE ${OLD_CONFIG_FILES})
      endif()
    endif()
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/openpifpaf_ros2_msgs_v2/cmake" TYPE FILE FILES "/root/Pose_waypointmaker/build/openpifpaf_ros2_msgs_v2/CMakeFiles/Export/share/openpifpaf_ros2_msgs_v2/cmake/openpifpaf_ros2_msgs_v2__rosidl_typesupport_cExport.cmake")
  if("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^()$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/openpifpaf_ros2_msgs_v2/cmake" TYPE FILE FILES "/root/Pose_waypointmaker/build/openpifpaf_ros2_msgs_v2/CMakeFiles/Export/share/openpifpaf_ros2_msgs_v2/cmake/openpifpaf_ros2_msgs_v2__rosidl_typesupport_cExport-noconfig.cmake")
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/openpifpaf_ros2_msgs_v2/cmake/openpifpaf_ros2_msgs_v2__rosidl_generator_cppExport.cmake")
    file(DIFFERENT EXPORT_FILE_CHANGED FILES
         "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/openpifpaf_ros2_msgs_v2/cmake/openpifpaf_ros2_msgs_v2__rosidl_generator_cppExport.cmake"
         "/root/Pose_waypointmaker/build/openpifpaf_ros2_msgs_v2/CMakeFiles/Export/share/openpifpaf_ros2_msgs_v2/cmake/openpifpaf_ros2_msgs_v2__rosidl_generator_cppExport.cmake")
    if(EXPORT_FILE_CHANGED)
      file(GLOB OLD_CONFIG_FILES "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/openpifpaf_ros2_msgs_v2/cmake/openpifpaf_ros2_msgs_v2__rosidl_generator_cppExport-*.cmake")
      if(OLD_CONFIG_FILES)
        message(STATUS "Old export file \"$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/openpifpaf_ros2_msgs_v2/cmake/openpifpaf_ros2_msgs_v2__rosidl_generator_cppExport.cmake\" will be replaced.  Removing files [${OLD_CONFIG_FILES}].")
        file(REMOVE ${OLD_CONFIG_FILES})
      endif()
    endif()
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/openpifpaf_ros2_msgs_v2/cmake" TYPE FILE FILES "/root/Pose_waypointmaker/build/openpifpaf_ros2_msgs_v2/CMakeFiles/Export/share/openpifpaf_ros2_msgs_v2/cmake/openpifpaf_ros2_msgs_v2__rosidl_generator_cppExport.cmake")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/openpifpaf_ros2_msgs_v2/cmake/openpifpaf_ros2_msgs_v2__rosidl_typesupport_introspection_cppExport.cmake")
    file(DIFFERENT EXPORT_FILE_CHANGED FILES
         "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/openpifpaf_ros2_msgs_v2/cmake/openpifpaf_ros2_msgs_v2__rosidl_typesupport_introspection_cppExport.cmake"
         "/root/Pose_waypointmaker/build/openpifpaf_ros2_msgs_v2/CMakeFiles/Export/share/openpifpaf_ros2_msgs_v2/cmake/openpifpaf_ros2_msgs_v2__rosidl_typesupport_introspection_cppExport.cmake")
    if(EXPORT_FILE_CHANGED)
      file(GLOB OLD_CONFIG_FILES "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/openpifpaf_ros2_msgs_v2/cmake/openpifpaf_ros2_msgs_v2__rosidl_typesupport_introspection_cppExport-*.cmake")
      if(OLD_CONFIG_FILES)
        message(STATUS "Old export file \"$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/openpifpaf_ros2_msgs_v2/cmake/openpifpaf_ros2_msgs_v2__rosidl_typesupport_introspection_cppExport.cmake\" will be replaced.  Removing files [${OLD_CONFIG_FILES}].")
        file(REMOVE ${OLD_CONFIG_FILES})
      endif()
    endif()
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/openpifpaf_ros2_msgs_v2/cmake" TYPE FILE FILES "/root/Pose_waypointmaker/build/openpifpaf_ros2_msgs_v2/CMakeFiles/Export/share/openpifpaf_ros2_msgs_v2/cmake/openpifpaf_ros2_msgs_v2__rosidl_typesupport_introspection_cppExport.cmake")
  if("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^()$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/openpifpaf_ros2_msgs_v2/cmake" TYPE FILE FILES "/root/Pose_waypointmaker/build/openpifpaf_ros2_msgs_v2/CMakeFiles/Export/share/openpifpaf_ros2_msgs_v2/cmake/openpifpaf_ros2_msgs_v2__rosidl_typesupport_introspection_cppExport-noconfig.cmake")
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/openpifpaf_ros2_msgs_v2/cmake/openpifpaf_ros2_msgs_v2__rosidl_typesupport_cppExport.cmake")
    file(DIFFERENT EXPORT_FILE_CHANGED FILES
         "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/openpifpaf_ros2_msgs_v2/cmake/openpifpaf_ros2_msgs_v2__rosidl_typesupport_cppExport.cmake"
         "/root/Pose_waypointmaker/build/openpifpaf_ros2_msgs_v2/CMakeFiles/Export/share/openpifpaf_ros2_msgs_v2/cmake/openpifpaf_ros2_msgs_v2__rosidl_typesupport_cppExport.cmake")
    if(EXPORT_FILE_CHANGED)
      file(GLOB OLD_CONFIG_FILES "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/openpifpaf_ros2_msgs_v2/cmake/openpifpaf_ros2_msgs_v2__rosidl_typesupport_cppExport-*.cmake")
      if(OLD_CONFIG_FILES)
        message(STATUS "Old export file \"$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/openpifpaf_ros2_msgs_v2/cmake/openpifpaf_ros2_msgs_v2__rosidl_typesupport_cppExport.cmake\" will be replaced.  Removing files [${OLD_CONFIG_FILES}].")
        file(REMOVE ${OLD_CONFIG_FILES})
      endif()
    endif()
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/openpifpaf_ros2_msgs_v2/cmake" TYPE FILE FILES "/root/Pose_waypointmaker/build/openpifpaf_ros2_msgs_v2/CMakeFiles/Export/share/openpifpaf_ros2_msgs_v2/cmake/openpifpaf_ros2_msgs_v2__rosidl_typesupport_cppExport.cmake")
  if("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^()$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/openpifpaf_ros2_msgs_v2/cmake" TYPE FILE FILES "/root/Pose_waypointmaker/build/openpifpaf_ros2_msgs_v2/CMakeFiles/Export/share/openpifpaf_ros2_msgs_v2/cmake/openpifpaf_ros2_msgs_v2__rosidl_typesupport_cppExport-noconfig.cmake")
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/openpifpaf_ros2_msgs_v2/cmake" TYPE FILE FILES "/root/Pose_waypointmaker/build/openpifpaf_ros2_msgs_v2/rosidl_cmake/rosidl_cmake-extras.cmake")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/openpifpaf_ros2_msgs_v2/cmake" TYPE FILE FILES "/root/Pose_waypointmaker/build/openpifpaf_ros2_msgs_v2/ament_cmake_export_dependencies/ament_cmake_export_dependencies-extras.cmake")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/openpifpaf_ros2_msgs_v2/cmake" TYPE FILE FILES "/root/Pose_waypointmaker/build/openpifpaf_ros2_msgs_v2/ament_cmake_export_libraries/ament_cmake_export_libraries-extras.cmake")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/openpifpaf_ros2_msgs_v2/cmake" TYPE FILE FILES "/root/Pose_waypointmaker/build/openpifpaf_ros2_msgs_v2/ament_cmake_export_targets/ament_cmake_export_targets-extras.cmake")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/openpifpaf_ros2_msgs_v2/cmake" TYPE FILE FILES "/root/Pose_waypointmaker/build/openpifpaf_ros2_msgs_v2/ament_cmake_export_include_directories/ament_cmake_export_include_directories-extras.cmake")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/openpifpaf_ros2_msgs_v2/cmake" TYPE FILE FILES "/root/Pose_waypointmaker/build/openpifpaf_ros2_msgs_v2/rosidl_cmake/rosidl_cmake_export_typesupport_libraries-extras.cmake")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/openpifpaf_ros2_msgs_v2/cmake" TYPE FILE FILES "/root/Pose_waypointmaker/build/openpifpaf_ros2_msgs_v2/rosidl_cmake/rosidl_cmake_export_typesupport_targets-extras.cmake")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/openpifpaf_ros2_msgs_v2/cmake" TYPE FILE FILES
    "/root/Pose_waypointmaker/build/openpifpaf_ros2_msgs_v2/ament_cmake_core/openpifpaf_ros2_msgs_v2Config.cmake"
    "/root/Pose_waypointmaker/build/openpifpaf_ros2_msgs_v2/ament_cmake_core/openpifpaf_ros2_msgs_v2Config-version.cmake"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/openpifpaf_ros2_msgs_v2" TYPE FILE FILES "/root/Pose_waypointmaker/src/openpifpaf_ros2_msgs_v2/package.xml")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for each subdirectory.
  include("/root/Pose_waypointmaker/build/openpifpaf_ros2_msgs_v2/openpifpaf_ros2_msgs_v2__py/cmake_install.cmake")

endif()

if(CMAKE_INSTALL_COMPONENT)
  set(CMAKE_INSTALL_MANIFEST "install_manifest_${CMAKE_INSTALL_COMPONENT}.txt")
else()
  set(CMAKE_INSTALL_MANIFEST "install_manifest.txt")
endif()

string(REPLACE ";" "\n" CMAKE_INSTALL_MANIFEST_CONTENT
       "${CMAKE_INSTALL_MANIFEST_FILES}")
file(WRITE "/root/Pose_waypointmaker/build/openpifpaf_ros2_msgs_v2/${CMAKE_INSTALL_MANIFEST}"
     "${CMAKE_INSTALL_MANIFEST_CONTENT}")
