# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.16

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /root/Pose_waypointmaker/src/rtabmap

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /root/Pose_waypointmaker/build/rtabmap

# Include any dependencies generated for this target.
include examples/RGBDMapping/CMakeFiles/rgbd_mapping.dir/depend.make

# Include the progress variables for this target.
include examples/RGBDMapping/CMakeFiles/rgbd_mapping.dir/progress.make

# Include the compile flags for this target's objects.
include examples/RGBDMapping/CMakeFiles/rgbd_mapping.dir/flags.make

examples/RGBDMapping/moc_MapBuilder.cpp: /root/Pose_waypointmaker/src/rtabmap/examples/RGBDMapping/MapBuilder.h
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/root/Pose_waypointmaker/build/rtabmap/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Generating moc_MapBuilder.cpp"
	cd /root/Pose_waypointmaker/build/rtabmap/examples/RGBDMapping && /usr/lib/qt5/bin/moc @/root/Pose_waypointmaker/build/rtabmap/examples/RGBDMapping/moc_MapBuilder.cpp_parameters

examples/RGBDMapping/CMakeFiles/rgbd_mapping.dir/main.cpp.o: examples/RGBDMapping/CMakeFiles/rgbd_mapping.dir/flags.make
examples/RGBDMapping/CMakeFiles/rgbd_mapping.dir/main.cpp.o: /root/Pose_waypointmaker/src/rtabmap/examples/RGBDMapping/main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/root/Pose_waypointmaker/build/rtabmap/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object examples/RGBDMapping/CMakeFiles/rgbd_mapping.dir/main.cpp.o"
	cd /root/Pose_waypointmaker/build/rtabmap/examples/RGBDMapping && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/rgbd_mapping.dir/main.cpp.o -c /root/Pose_waypointmaker/src/rtabmap/examples/RGBDMapping/main.cpp

examples/RGBDMapping/CMakeFiles/rgbd_mapping.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/rgbd_mapping.dir/main.cpp.i"
	cd /root/Pose_waypointmaker/build/rtabmap/examples/RGBDMapping && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /root/Pose_waypointmaker/src/rtabmap/examples/RGBDMapping/main.cpp > CMakeFiles/rgbd_mapping.dir/main.cpp.i

examples/RGBDMapping/CMakeFiles/rgbd_mapping.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/rgbd_mapping.dir/main.cpp.s"
	cd /root/Pose_waypointmaker/build/rtabmap/examples/RGBDMapping && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /root/Pose_waypointmaker/src/rtabmap/examples/RGBDMapping/main.cpp -o CMakeFiles/rgbd_mapping.dir/main.cpp.s

examples/RGBDMapping/CMakeFiles/rgbd_mapping.dir/moc_MapBuilder.cpp.o: examples/RGBDMapping/CMakeFiles/rgbd_mapping.dir/flags.make
examples/RGBDMapping/CMakeFiles/rgbd_mapping.dir/moc_MapBuilder.cpp.o: examples/RGBDMapping/moc_MapBuilder.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/root/Pose_waypointmaker/build/rtabmap/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object examples/RGBDMapping/CMakeFiles/rgbd_mapping.dir/moc_MapBuilder.cpp.o"
	cd /root/Pose_waypointmaker/build/rtabmap/examples/RGBDMapping && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/rgbd_mapping.dir/moc_MapBuilder.cpp.o -c /root/Pose_waypointmaker/build/rtabmap/examples/RGBDMapping/moc_MapBuilder.cpp

examples/RGBDMapping/CMakeFiles/rgbd_mapping.dir/moc_MapBuilder.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/rgbd_mapping.dir/moc_MapBuilder.cpp.i"
	cd /root/Pose_waypointmaker/build/rtabmap/examples/RGBDMapping && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /root/Pose_waypointmaker/build/rtabmap/examples/RGBDMapping/moc_MapBuilder.cpp > CMakeFiles/rgbd_mapping.dir/moc_MapBuilder.cpp.i

examples/RGBDMapping/CMakeFiles/rgbd_mapping.dir/moc_MapBuilder.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/rgbd_mapping.dir/moc_MapBuilder.cpp.s"
	cd /root/Pose_waypointmaker/build/rtabmap/examples/RGBDMapping && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /root/Pose_waypointmaker/build/rtabmap/examples/RGBDMapping/moc_MapBuilder.cpp -o CMakeFiles/rgbd_mapping.dir/moc_MapBuilder.cpp.s

# Object files for target rgbd_mapping
rgbd_mapping_OBJECTS = \
"CMakeFiles/rgbd_mapping.dir/main.cpp.o" \
"CMakeFiles/rgbd_mapping.dir/moc_MapBuilder.cpp.o"

# External object files for target rgbd_mapping
rgbd_mapping_EXTERNAL_OBJECTS =

bin/rtabmap-rgbd_mapping: examples/RGBDMapping/CMakeFiles/rgbd_mapping.dir/main.cpp.o
bin/rtabmap-rgbd_mapping: examples/RGBDMapping/CMakeFiles/rgbd_mapping.dir/moc_MapBuilder.cpp.o
bin/rtabmap-rgbd_mapping: examples/RGBDMapping/CMakeFiles/rgbd_mapping.dir/build.make
bin/rtabmap-rgbd_mapping: bin/librtabmap_gui.so.0.20.22
bin/rtabmap-rgbd_mapping: /usr/lib/x86_64-linux-gnu/libboost_system.so
bin/rtabmap-rgbd_mapping: /usr/lib/x86_64-linux-gnu/libboost_filesystem.so
bin/rtabmap-rgbd_mapping: /usr/lib/x86_64-linux-gnu/libboost_date_time.so
bin/rtabmap-rgbd_mapping: /usr/lib/x86_64-linux-gnu/libboost_iostreams.so
bin/rtabmap-rgbd_mapping: /usr/lib/x86_64-linux-gnu/libboost_regex.so
bin/rtabmap-rgbd_mapping: /usr/lib/x86_64-linux-gnu/libqhull.so
bin/rtabmap-rgbd_mapping: /usr/lib/libOpenNI.so
bin/rtabmap-rgbd_mapping: /usr/lib/x86_64-linux-gnu/libfreetype.so
bin/rtabmap-rgbd_mapping: /usr/lib/x86_64-linux-gnu/libz.so
bin/rtabmap-rgbd_mapping: /usr/lib/x86_64-linux-gnu/libjpeg.so
bin/rtabmap-rgbd_mapping: /usr/lib/x86_64-linux-gnu/libpng.so
bin/rtabmap-rgbd_mapping: /usr/lib/x86_64-linux-gnu/libtiff.so
bin/rtabmap-rgbd_mapping: /usr/lib/x86_64-linux-gnu/libexpat.so
bin/rtabmap-rgbd_mapping: bin/librtabmap_core.so.0.20.22
bin/rtabmap-rgbd_mapping: /usr/lib/x86_64-linux-gnu/libsqlite3.so
bin/rtabmap-rgbd_mapping: /usr/lib/libOpenNI2.so
bin/rtabmap-rgbd_mapping: /usr/lib/x86_64-linux-gnu/librealsense2.so.2.51.1
bin/rtabmap-rgbd_mapping: /usr/lib/x86_64-linux-gnu/libdc1394.so
bin/rtabmap-rgbd_mapping: /usr/lib/gcc/x86_64-linux-gnu/9/libgomp.so
bin/rtabmap-rgbd_mapping: bin/librtabmap_utilite.so.0.20.22
bin/rtabmap-rgbd_mapping: /usr/lib/x86_64-linux-gnu/libpthread.so
bin/rtabmap-rgbd_mapping: /usr/lib/x86_64-linux-gnu/libopencv_highgui.so.4.2.0
bin/rtabmap-rgbd_mapping: /usr/lib/x86_64-linux-gnu/libopencv_videoio.so.4.2.0
bin/rtabmap-rgbd_mapping: /usr/lib/x86_64-linux-gnu/libopencv_imgcodecs.so.4.2.0
bin/rtabmap-rgbd_mapping: /usr/lib/x86_64-linux-gnu/libopencv_stitching.so.4.2.0
bin/rtabmap-rgbd_mapping: /usr/lib/x86_64-linux-gnu/libopencv_photo.so.4.2.0
bin/rtabmap-rgbd_mapping: /usr/lib/x86_64-linux-gnu/libopencv_video.so.4.2.0
bin/rtabmap-rgbd_mapping: /usr/lib/x86_64-linux-gnu/libopencv_aruco.so.4.2.0
bin/rtabmap-rgbd_mapping: /usr/lib/x86_64-linux-gnu/libopencv_calib3d.so.4.2.0
bin/rtabmap-rgbd_mapping: /usr/lib/x86_64-linux-gnu/libopencv_features2d.so.4.2.0
bin/rtabmap-rgbd_mapping: /usr/lib/x86_64-linux-gnu/libopencv_imgproc.so.4.2.0
bin/rtabmap-rgbd_mapping: /usr/lib/x86_64-linux-gnu/libopencv_flann.so.4.2.0
bin/rtabmap-rgbd_mapping: /usr/lib/x86_64-linux-gnu/libopencv_core.so.4.2.0
bin/rtabmap-rgbd_mapping: /usr/lib/x86_64-linux-gnu/libpcl_surface.so
bin/rtabmap-rgbd_mapping: /usr/lib/x86_64-linux-gnu/libpcl_registration.so
bin/rtabmap-rgbd_mapping: /usr/lib/x86_64-linux-gnu/libpcl_segmentation.so
bin/rtabmap-rgbd_mapping: /usr/lib/x86_64-linux-gnu/libpcl_features.so
bin/rtabmap-rgbd_mapping: /usr/lib/x86_64-linux-gnu/libpcl_filters.so
bin/rtabmap-rgbd_mapping: /usr/lib/x86_64-linux-gnu/libpcl_sample_consensus.so
bin/rtabmap-rgbd_mapping: /usr/lib/x86_64-linux-gnu/libpcl_ml.so
bin/rtabmap-rgbd_mapping: /usr/lib/x86_64-linux-gnu/libpcl_visualization.so
bin/rtabmap-rgbd_mapping: /usr/lib/x86_64-linux-gnu/libpcl_io.so
bin/rtabmap-rgbd_mapping: /usr/lib/x86_64-linux-gnu/libpcl_search.so
bin/rtabmap-rgbd_mapping: /usr/lib/x86_64-linux-gnu/libpcl_octree.so
bin/rtabmap-rgbd_mapping: /usr/lib/x86_64-linux-gnu/libpcl_kdtree.so
bin/rtabmap-rgbd_mapping: /usr/lib/x86_64-linux-gnu/libpcl_common.so
bin/rtabmap-rgbd_mapping: /usr/lib/x86_64-linux-gnu/libboost_system.so
bin/rtabmap-rgbd_mapping: /usr/lib/x86_64-linux-gnu/libboost_filesystem.so
bin/rtabmap-rgbd_mapping: /usr/lib/x86_64-linux-gnu/libboost_date_time.so
bin/rtabmap-rgbd_mapping: /usr/lib/x86_64-linux-gnu/libboost_iostreams.so
bin/rtabmap-rgbd_mapping: /usr/lib/x86_64-linux-gnu/libboost_regex.so
bin/rtabmap-rgbd_mapping: /usr/lib/x86_64-linux-gnu/libqhull.so
bin/rtabmap-rgbd_mapping: /usr/lib/libOpenNI.so
bin/rtabmap-rgbd_mapping: /usr/lib/x86_64-linux-gnu/libvtkChartsCore-7.1.so.7.1p.1
bin/rtabmap-rgbd_mapping: /usr/lib/x86_64-linux-gnu/libvtkInfovisCore-7.1.so.7.1p.1
bin/rtabmap-rgbd_mapping: /usr/lib/x86_64-linux-gnu/libjpeg.so
bin/rtabmap-rgbd_mapping: /usr/lib/x86_64-linux-gnu/libpng.so
bin/rtabmap-rgbd_mapping: /usr/lib/x86_64-linux-gnu/libtiff.so
bin/rtabmap-rgbd_mapping: /usr/lib/x86_64-linux-gnu/libexpat.so
bin/rtabmap-rgbd_mapping: /usr/lib/x86_64-linux-gnu/libvtkIOGeometry-7.1.so.7.1p.1
bin/rtabmap-rgbd_mapping: /usr/lib/x86_64-linux-gnu/libvtkIOLegacy-7.1.so.7.1p.1
bin/rtabmap-rgbd_mapping: /usr/lib/x86_64-linux-gnu/libvtkIOPLY-7.1.so.7.1p.1
bin/rtabmap-rgbd_mapping: /usr/lib/x86_64-linux-gnu/libvtkRenderingLOD-7.1.so.7.1p.1
bin/rtabmap-rgbd_mapping: /usr/lib/x86_64-linux-gnu/libvtkViewsContext2D-7.1.so.7.1p.1
bin/rtabmap-rgbd_mapping: /usr/lib/x86_64-linux-gnu/libvtkViewsCore-7.1.so.7.1p.1
bin/rtabmap-rgbd_mapping: /usr/lib/x86_64-linux-gnu/libvtkInteractionWidgets-7.1.so.7.1p.1
bin/rtabmap-rgbd_mapping: /usr/lib/x86_64-linux-gnu/libvtkFiltersModeling-7.1.so.7.1p.1
bin/rtabmap-rgbd_mapping: /usr/lib/x86_64-linux-gnu/libvtkFiltersHybrid-7.1.so.7.1p.1
bin/rtabmap-rgbd_mapping: /usr/lib/x86_64-linux-gnu/libvtkImagingGeneral-7.1.so.7.1p.1
bin/rtabmap-rgbd_mapping: /usr/lib/x86_64-linux-gnu/libvtkImagingSources-7.1.so.7.1p.1
bin/rtabmap-rgbd_mapping: /usr/lib/x86_64-linux-gnu/libvtkImagingHybrid-7.1.so.7.1p.1
bin/rtabmap-rgbd_mapping: /usr/lib/x86_64-linux-gnu/libvtkRenderingAnnotation-7.1.so.7.1p.1
bin/rtabmap-rgbd_mapping: /usr/lib/x86_64-linux-gnu/libvtkImagingColor-7.1.so.7.1p.1
bin/rtabmap-rgbd_mapping: /usr/lib/x86_64-linux-gnu/libvtkRenderingContextOpenGL2-7.1.so.7.1p.1
bin/rtabmap-rgbd_mapping: /usr/lib/x86_64-linux-gnu/libvtkRenderingContext2D-7.1.so.7.1p.1
bin/rtabmap-rgbd_mapping: /usr/lib/x86_64-linux-gnu/libvtkRenderingFreeType-7.1.so.7.1p.1
bin/rtabmap-rgbd_mapping: /usr/lib/x86_64-linux-gnu/libfreetype.so
bin/rtabmap-rgbd_mapping: /usr/lib/x86_64-linux-gnu/libflann_cpp.so
bin/rtabmap-rgbd_mapping: /usr/lib/x86_64-linux-gnu/libvtkGUISupportQt-7.1.so.7.1p.1
bin/rtabmap-rgbd_mapping: /usr/lib/x86_64-linux-gnu/libvtkInteractionStyle-7.1.so.7.1p.1
bin/rtabmap-rgbd_mapping: /usr/lib/x86_64-linux-gnu/libvtkFiltersExtraction-7.1.so.7.1p.1
bin/rtabmap-rgbd_mapping: /usr/lib/x86_64-linux-gnu/libvtkFiltersStatistics-7.1.so.7.1p.1
bin/rtabmap-rgbd_mapping: /usr/lib/x86_64-linux-gnu/libvtkImagingFourier-7.1.so.7.1p.1
bin/rtabmap-rgbd_mapping: /usr/lib/x86_64-linux-gnu/libvtkalglib-7.1.so.7.1p.1
bin/rtabmap-rgbd_mapping: /usr/lib/x86_64-linux-gnu/libvtkRenderingVolumeOpenGL2-7.1.so.7.1p.1
bin/rtabmap-rgbd_mapping: /usr/lib/x86_64-linux-gnu/libvtkRenderingVolume-7.1.so.7.1p.1
bin/rtabmap-rgbd_mapping: /usr/lib/x86_64-linux-gnu/libvtkIOXML-7.1.so.7.1p.1
bin/rtabmap-rgbd_mapping: /usr/lib/x86_64-linux-gnu/libvtkIOXMLParser-7.1.so.7.1p.1
bin/rtabmap-rgbd_mapping: /usr/lib/x86_64-linux-gnu/libvtkIOCore-7.1.so.7.1p.1
bin/rtabmap-rgbd_mapping: /usr/lib/x86_64-linux-gnu/libvtkRenderingOpenGL2-7.1.so.7.1p.1
bin/rtabmap-rgbd_mapping: /usr/lib/x86_64-linux-gnu/libvtkImagingCore-7.1.so.7.1p.1
bin/rtabmap-rgbd_mapping: /usr/lib/x86_64-linux-gnu/libvtkRenderingCore-7.1.so.7.1p.1
bin/rtabmap-rgbd_mapping: /usr/lib/x86_64-linux-gnu/libvtkCommonColor-7.1.so.7.1p.1
bin/rtabmap-rgbd_mapping: /usr/lib/x86_64-linux-gnu/libvtkFiltersGeometry-7.1.so.7.1p.1
bin/rtabmap-rgbd_mapping: /usr/lib/x86_64-linux-gnu/libvtkFiltersSources-7.1.so.7.1p.1
bin/rtabmap-rgbd_mapping: /usr/lib/x86_64-linux-gnu/libvtkFiltersGeneral-7.1.so.7.1p.1
bin/rtabmap-rgbd_mapping: /usr/lib/x86_64-linux-gnu/libvtkCommonComputationalGeometry-7.1.so.7.1p.1
bin/rtabmap-rgbd_mapping: /usr/lib/x86_64-linux-gnu/libvtkFiltersCore-7.1.so.7.1p.1
bin/rtabmap-rgbd_mapping: /usr/lib/x86_64-linux-gnu/libvtkIOImage-7.1.so.7.1p.1
bin/rtabmap-rgbd_mapping: /usr/lib/x86_64-linux-gnu/libvtkDICOMParser-7.1.so.7.1p.1
bin/rtabmap-rgbd_mapping: /usr/lib/x86_64-linux-gnu/libvtkmetaio-7.1.so.7.1p.1
bin/rtabmap-rgbd_mapping: /usr/lib/x86_64-linux-gnu/libz.so
bin/rtabmap-rgbd_mapping: /usr/lib/x86_64-linux-gnu/libGLEW.so
bin/rtabmap-rgbd_mapping: /usr/lib/x86_64-linux-gnu/libSM.so
bin/rtabmap-rgbd_mapping: /usr/lib/x86_64-linux-gnu/libICE.so
bin/rtabmap-rgbd_mapping: /usr/lib/x86_64-linux-gnu/libX11.so
bin/rtabmap-rgbd_mapping: /usr/lib/x86_64-linux-gnu/libXext.so
bin/rtabmap-rgbd_mapping: /usr/lib/x86_64-linux-gnu/libXt.so
bin/rtabmap-rgbd_mapping: /usr/lib/x86_64-linux-gnu/libvtkImagingMath-7.1.so.7.1p.1
bin/rtabmap-rgbd_mapping: /usr/lib/x86_64-linux-gnu/libvtkCommonExecutionModel-7.1.so.7.1p.1
bin/rtabmap-rgbd_mapping: /usr/lib/x86_64-linux-gnu/libvtkCommonDataModel-7.1.so.7.1p.1
bin/rtabmap-rgbd_mapping: /usr/lib/x86_64-linux-gnu/libvtkCommonTransforms-7.1.so.7.1p.1
bin/rtabmap-rgbd_mapping: /usr/lib/x86_64-linux-gnu/libvtkCommonMisc-7.1.so.7.1p.1
bin/rtabmap-rgbd_mapping: /usr/lib/x86_64-linux-gnu/libvtkCommonMath-7.1.so.7.1p.1
bin/rtabmap-rgbd_mapping: /usr/lib/x86_64-linux-gnu/libvtkCommonSystem-7.1.so.7.1p.1
bin/rtabmap-rgbd_mapping: /usr/lib/x86_64-linux-gnu/libvtkCommonCore-7.1.so.7.1p.1
bin/rtabmap-rgbd_mapping: /usr/lib/x86_64-linux-gnu/libvtksys-7.1.so.7.1p.1
bin/rtabmap-rgbd_mapping: /usr/lib/x86_64-linux-gnu/libQt5PrintSupport.so.5.12.8
bin/rtabmap-rgbd_mapping: /usr/lib/x86_64-linux-gnu/libQt5Widgets.so.5.12.8
bin/rtabmap-rgbd_mapping: /usr/lib/x86_64-linux-gnu/libQt5Gui.so.5.12.8
bin/rtabmap-rgbd_mapping: /usr/lib/x86_64-linux-gnu/libQt5Core.so.5.12.8
bin/rtabmap-rgbd_mapping: examples/RGBDMapping/CMakeFiles/rgbd_mapping.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/root/Pose_waypointmaker/build/rtabmap/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Linking CXX executable ../../bin/rtabmap-rgbd_mapping"
	cd /root/Pose_waypointmaker/build/rtabmap/examples/RGBDMapping && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/rgbd_mapping.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
examples/RGBDMapping/CMakeFiles/rgbd_mapping.dir/build: bin/rtabmap-rgbd_mapping

.PHONY : examples/RGBDMapping/CMakeFiles/rgbd_mapping.dir/build

examples/RGBDMapping/CMakeFiles/rgbd_mapping.dir/clean:
	cd /root/Pose_waypointmaker/build/rtabmap/examples/RGBDMapping && $(CMAKE_COMMAND) -P CMakeFiles/rgbd_mapping.dir/cmake_clean.cmake
.PHONY : examples/RGBDMapping/CMakeFiles/rgbd_mapping.dir/clean

examples/RGBDMapping/CMakeFiles/rgbd_mapping.dir/depend: examples/RGBDMapping/moc_MapBuilder.cpp
	cd /root/Pose_waypointmaker/build/rtabmap && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /root/Pose_waypointmaker/src/rtabmap /root/Pose_waypointmaker/src/rtabmap/examples/RGBDMapping /root/Pose_waypointmaker/build/rtabmap /root/Pose_waypointmaker/build/rtabmap/examples/RGBDMapping /root/Pose_waypointmaker/build/rtabmap/examples/RGBDMapping/CMakeFiles/rgbd_mapping.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : examples/RGBDMapping/CMakeFiles/rgbd_mapping.dir/depend

