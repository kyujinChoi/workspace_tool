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
CMAKE_SOURCE_DIR = /home/ckj/my_github/workspace_tool/c

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/ckj/my_github/workspace_tool/c/build

# Include any dependencies generated for this target.
include CMakeFiles/workPlaceTool.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/workPlaceTool.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/workPlaceTool.dir/flags.make

CMakeFiles/workPlaceTool.dir/workPlaceTool_autogen/mocs_compilation.cpp.o: CMakeFiles/workPlaceTool.dir/flags.make
CMakeFiles/workPlaceTool.dir/workPlaceTool_autogen/mocs_compilation.cpp.o: workPlaceTool_autogen/mocs_compilation.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ckj/my_github/workspace_tool/c/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/workPlaceTool.dir/workPlaceTool_autogen/mocs_compilation.cpp.o"
	/usr/bin/g++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/workPlaceTool.dir/workPlaceTool_autogen/mocs_compilation.cpp.o -c /home/ckj/my_github/workspace_tool/c/build/workPlaceTool_autogen/mocs_compilation.cpp

CMakeFiles/workPlaceTool.dir/workPlaceTool_autogen/mocs_compilation.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/workPlaceTool.dir/workPlaceTool_autogen/mocs_compilation.cpp.i"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/ckj/my_github/workspace_tool/c/build/workPlaceTool_autogen/mocs_compilation.cpp > CMakeFiles/workPlaceTool.dir/workPlaceTool_autogen/mocs_compilation.cpp.i

CMakeFiles/workPlaceTool.dir/workPlaceTool_autogen/mocs_compilation.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/workPlaceTool.dir/workPlaceTool_autogen/mocs_compilation.cpp.s"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/ckj/my_github/workspace_tool/c/build/workPlaceTool_autogen/mocs_compilation.cpp -o CMakeFiles/workPlaceTool.dir/workPlaceTool_autogen/mocs_compilation.cpp.s

CMakeFiles/workPlaceTool.dir/core.cpp.o: CMakeFiles/workPlaceTool.dir/flags.make
CMakeFiles/workPlaceTool.dir/core.cpp.o: ../core.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ckj/my_github/workspace_tool/c/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/workPlaceTool.dir/core.cpp.o"
	/usr/bin/g++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/workPlaceTool.dir/core.cpp.o -c /home/ckj/my_github/workspace_tool/c/core.cpp

CMakeFiles/workPlaceTool.dir/core.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/workPlaceTool.dir/core.cpp.i"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/ckj/my_github/workspace_tool/c/core.cpp > CMakeFiles/workPlaceTool.dir/core.cpp.i

CMakeFiles/workPlaceTool.dir/core.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/workPlaceTool.dir/core.cpp.s"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/ckj/my_github/workspace_tool/c/core.cpp -o CMakeFiles/workPlaceTool.dir/core.cpp.s

CMakeFiles/workPlaceTool.dir/main.cpp.o: CMakeFiles/workPlaceTool.dir/flags.make
CMakeFiles/workPlaceTool.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ckj/my_github/workspace_tool/c/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/workPlaceTool.dir/main.cpp.o"
	/usr/bin/g++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/workPlaceTool.dir/main.cpp.o -c /home/ckj/my_github/workspace_tool/c/main.cpp

CMakeFiles/workPlaceTool.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/workPlaceTool.dir/main.cpp.i"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/ckj/my_github/workspace_tool/c/main.cpp > CMakeFiles/workPlaceTool.dir/main.cpp.i

CMakeFiles/workPlaceTool.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/workPlaceTool.dir/main.cpp.s"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/ckj/my_github/workspace_tool/c/main.cpp -o CMakeFiles/workPlaceTool.dir/main.cpp.s

CMakeFiles/workPlaceTool.dir/mainwindow.cpp.o: CMakeFiles/workPlaceTool.dir/flags.make
CMakeFiles/workPlaceTool.dir/mainwindow.cpp.o: ../mainwindow.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ckj/my_github/workspace_tool/c/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/workPlaceTool.dir/mainwindow.cpp.o"
	/usr/bin/g++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/workPlaceTool.dir/mainwindow.cpp.o -c /home/ckj/my_github/workspace_tool/c/mainwindow.cpp

CMakeFiles/workPlaceTool.dir/mainwindow.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/workPlaceTool.dir/mainwindow.cpp.i"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/ckj/my_github/workspace_tool/c/mainwindow.cpp > CMakeFiles/workPlaceTool.dir/mainwindow.cpp.i

CMakeFiles/workPlaceTool.dir/mainwindow.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/workPlaceTool.dir/mainwindow.cpp.s"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/ckj/my_github/workspace_tool/c/mainwindow.cpp -o CMakeFiles/workPlaceTool.dir/mainwindow.cpp.s

# Object files for target workPlaceTool
workPlaceTool_OBJECTS = \
"CMakeFiles/workPlaceTool.dir/workPlaceTool_autogen/mocs_compilation.cpp.o" \
"CMakeFiles/workPlaceTool.dir/core.cpp.o" \
"CMakeFiles/workPlaceTool.dir/main.cpp.o" \
"CMakeFiles/workPlaceTool.dir/mainwindow.cpp.o"

# External object files for target workPlaceTool
workPlaceTool_EXTERNAL_OBJECTS =

workPlaceTool: CMakeFiles/workPlaceTool.dir/workPlaceTool_autogen/mocs_compilation.cpp.o
workPlaceTool: CMakeFiles/workPlaceTool.dir/core.cpp.o
workPlaceTool: CMakeFiles/workPlaceTool.dir/main.cpp.o
workPlaceTool: CMakeFiles/workPlaceTool.dir/mainwindow.cpp.o
workPlaceTool: CMakeFiles/workPlaceTool.dir/build.make
workPlaceTool: /usr/lib/x86_64-linux-gnu/libQt5Widgets.so.5.12.8
workPlaceTool: /usr/lib/x86_64-linux-gnu/libQt5Gui.so.5.12.8
workPlaceTool: /usr/lib/x86_64-linux-gnu/libQt5Core.so.5.12.8
workPlaceTool: CMakeFiles/workPlaceTool.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/ckj/my_github/workspace_tool/c/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Linking CXX executable workPlaceTool"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/workPlaceTool.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/workPlaceTool.dir/build: workPlaceTool

.PHONY : CMakeFiles/workPlaceTool.dir/build

CMakeFiles/workPlaceTool.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/workPlaceTool.dir/cmake_clean.cmake
.PHONY : CMakeFiles/workPlaceTool.dir/clean

CMakeFiles/workPlaceTool.dir/depend:
	cd /home/ckj/my_github/workspace_tool/c/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/ckj/my_github/workspace_tool/c /home/ckj/my_github/workspace_tool/c /home/ckj/my_github/workspace_tool/c/build /home/ckj/my_github/workspace_tool/c/build /home/ckj/my_github/workspace_tool/c/build/CMakeFiles/workPlaceTool.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/workPlaceTool.dir/depend
