# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.7

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
CMAKE_SOURCE_DIR = /home/aldo/PrgramasOpenGL/AGlaboratorio/Laboratorio1/2_segundogrado

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/aldo/PrgramasOpenGL/AGlaboratorio/Laboratorio1/2_segundogrado/build

# Include any dependencies generated for this target.
include CMakeFiles/segundog.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/segundog.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/segundog.dir/flags.make

CMakeFiles/segundog.dir/segundog.cpp.o: CMakeFiles/segundog.dir/flags.make
CMakeFiles/segundog.dir/segundog.cpp.o: ../segundog.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/aldo/PrgramasOpenGL/AGlaboratorio/Laboratorio1/2_segundogrado/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/segundog.dir/segundog.cpp.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/segundog.dir/segundog.cpp.o -c /home/aldo/PrgramasOpenGL/AGlaboratorio/Laboratorio1/2_segundogrado/segundog.cpp

CMakeFiles/segundog.dir/segundog.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/segundog.dir/segundog.cpp.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/aldo/PrgramasOpenGL/AGlaboratorio/Laboratorio1/2_segundogrado/segundog.cpp > CMakeFiles/segundog.dir/segundog.cpp.i

CMakeFiles/segundog.dir/segundog.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/segundog.dir/segundog.cpp.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/aldo/PrgramasOpenGL/AGlaboratorio/Laboratorio1/2_segundogrado/segundog.cpp -o CMakeFiles/segundog.dir/segundog.cpp.s

CMakeFiles/segundog.dir/segundog.cpp.o.requires:

.PHONY : CMakeFiles/segundog.dir/segundog.cpp.o.requires

CMakeFiles/segundog.dir/segundog.cpp.o.provides: CMakeFiles/segundog.dir/segundog.cpp.o.requires
	$(MAKE) -f CMakeFiles/segundog.dir/build.make CMakeFiles/segundog.dir/segundog.cpp.o.provides.build
.PHONY : CMakeFiles/segundog.dir/segundog.cpp.o.provides

CMakeFiles/segundog.dir/segundog.cpp.o.provides.build: CMakeFiles/segundog.dir/segundog.cpp.o


# Object files for target segundog
segundog_OBJECTS = \
"CMakeFiles/segundog.dir/segundog.cpp.o"

# External object files for target segundog
segundog_EXTERNAL_OBJECTS =

segundog: CMakeFiles/segundog.dir/segundog.cpp.o
segundog: CMakeFiles/segundog.dir/build.make
segundog: /usr/lib/x86_64-linux-gnu/libGLU.so
segundog: /usr/lib/x86_64-linux-gnu/libGL.so
segundog: /usr/lib/x86_64-linux-gnu/libglut.so
segundog: /usr/lib/x86_64-linux-gnu/libXmu.so
segundog: /usr/lib/x86_64-linux-gnu/libXi.so
segundog: CMakeFiles/segundog.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/aldo/PrgramasOpenGL/AGlaboratorio/Laboratorio1/2_segundogrado/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable segundog"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/segundog.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/segundog.dir/build: segundog

.PHONY : CMakeFiles/segundog.dir/build

CMakeFiles/segundog.dir/requires: CMakeFiles/segundog.dir/segundog.cpp.o.requires

.PHONY : CMakeFiles/segundog.dir/requires

CMakeFiles/segundog.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/segundog.dir/cmake_clean.cmake
.PHONY : CMakeFiles/segundog.dir/clean

CMakeFiles/segundog.dir/depend:
	cd /home/aldo/PrgramasOpenGL/AGlaboratorio/Laboratorio1/2_segundogrado/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/aldo/PrgramasOpenGL/AGlaboratorio/Laboratorio1/2_segundogrado /home/aldo/PrgramasOpenGL/AGlaboratorio/Laboratorio1/2_segundogrado /home/aldo/PrgramasOpenGL/AGlaboratorio/Laboratorio1/2_segundogrado/build /home/aldo/PrgramasOpenGL/AGlaboratorio/Laboratorio1/2_segundogrado/build /home/aldo/PrgramasOpenGL/AGlaboratorio/Laboratorio1/2_segundogrado/build/CMakeFiles/segundog.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/segundog.dir/depend

