# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.27

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

# Disable VCS-based implicit rules.
% : %,v

# Disable VCS-based implicit rules.
% : RCS/%

# Disable VCS-based implicit rules.
% : RCS/%,v

# Disable VCS-based implicit rules.
% : SCCS/s.%

# Disable VCS-based implicit rules.
% : s.%

.SUFFIXES: .hpux_make_needs_suffix_list

# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

#Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:
.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /opt/homebrew/Cellar/cmake/3.27.7/bin/cmake

# The command to remove a file.
RM = /opt/homebrew/Cellar/cmake/3.27.7/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/nataliemanukyan/Desktop/Prog_tech_hw/7.Composite

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/nataliemanukyan/Desktop/Prog_tech_hw/7.Composite/build

# Include any dependencies generated for this target.
include CMakeFiles/ShapesQtApp.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/ShapesQtApp.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/ShapesQtApp.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/ShapesQtApp.dir/flags.make

CMakeFiles/ShapesQtApp.dir/Shapes.cpp.o: CMakeFiles/ShapesQtApp.dir/flags.make
CMakeFiles/ShapesQtApp.dir/Shapes.cpp.o: /Users/nataliemanukyan/Desktop/Prog_tech_hw/7.Composite/Shapes.cpp
CMakeFiles/ShapesQtApp.dir/Shapes.cpp.o: CMakeFiles/ShapesQtApp.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/nataliemanukyan/Desktop/Prog_tech_hw/7.Composite/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/ShapesQtApp.dir/Shapes.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/ShapesQtApp.dir/Shapes.cpp.o -MF CMakeFiles/ShapesQtApp.dir/Shapes.cpp.o.d -o CMakeFiles/ShapesQtApp.dir/Shapes.cpp.o -c /Users/nataliemanukyan/Desktop/Prog_tech_hw/7.Composite/Shapes.cpp

CMakeFiles/ShapesQtApp.dir/Shapes.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/ShapesQtApp.dir/Shapes.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/nataliemanukyan/Desktop/Prog_tech_hw/7.Composite/Shapes.cpp > CMakeFiles/ShapesQtApp.dir/Shapes.cpp.i

CMakeFiles/ShapesQtApp.dir/Shapes.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/ShapesQtApp.dir/Shapes.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/nataliemanukyan/Desktop/Prog_tech_hw/7.Composite/Shapes.cpp -o CMakeFiles/ShapesQtApp.dir/Shapes.cpp.s

# Object files for target ShapesQtApp
ShapesQtApp_OBJECTS = \
"CMakeFiles/ShapesQtApp.dir/Shapes.cpp.o"

# External object files for target ShapesQtApp
ShapesQtApp_EXTERNAL_OBJECTS =

ShapesQtApp: CMakeFiles/ShapesQtApp.dir/Shapes.cpp.o
ShapesQtApp: CMakeFiles/ShapesQtApp.dir/build.make
ShapesQtApp: /opt/homebrew/lib/QtWidgets.framework/Versions/A/QtWidgets
ShapesQtApp: /opt/homebrew/lib/QtGui.framework/Versions/A/QtGui
ShapesQtApp: /opt/homebrew/lib/QtCore.framework/Versions/A/QtCore
ShapesQtApp: CMakeFiles/ShapesQtApp.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=/Users/nataliemanukyan/Desktop/Prog_tech_hw/7.Composite/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable ShapesQtApp"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/ShapesQtApp.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/ShapesQtApp.dir/build: ShapesQtApp
.PHONY : CMakeFiles/ShapesQtApp.dir/build

CMakeFiles/ShapesQtApp.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/ShapesQtApp.dir/cmake_clean.cmake
.PHONY : CMakeFiles/ShapesQtApp.dir/clean

CMakeFiles/ShapesQtApp.dir/depend:
	cd /Users/nataliemanukyan/Desktop/Prog_tech_hw/7.Composite/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/nataliemanukyan/Desktop/Prog_tech_hw/7.Composite /Users/nataliemanukyan/Desktop/Prog_tech_hw/7.Composite /Users/nataliemanukyan/Desktop/Prog_tech_hw/7.Composite/build /Users/nataliemanukyan/Desktop/Prog_tech_hw/7.Composite/build /Users/nataliemanukyan/Desktop/Prog_tech_hw/7.Composite/build/CMakeFiles/ShapesQtApp.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : CMakeFiles/ShapesQtApp.dir/depend
