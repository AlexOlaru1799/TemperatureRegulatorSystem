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
CMAKE_SOURCE_DIR = /mnt/c/Users/Oli/Desktop/HeatingSystem

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /mnt/c/Users/Oli/Desktop/HeatingSystem/build

# Include any dependencies generated for this target.
include CMakeFiles/ATemperatureSystem.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/ATemperatureSystem.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/ATemperatureSystem.dir/flags.make

CMakeFiles/ATemperatureSystem.dir/ATemperatureSystem.cpp.o: CMakeFiles/ATemperatureSystem.dir/flags.make
CMakeFiles/ATemperatureSystem.dir/ATemperatureSystem.cpp.o: ../ATemperatureSystem.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/mnt/c/Users/Oli/Desktop/HeatingSystem/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/ATemperatureSystem.dir/ATemperatureSystem.cpp.o"
	/usr/bin/g++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/ATemperatureSystem.dir/ATemperatureSystem.cpp.o -c /mnt/c/Users/Oli/Desktop/HeatingSystem/ATemperatureSystem.cpp

CMakeFiles/ATemperatureSystem.dir/ATemperatureSystem.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ATemperatureSystem.dir/ATemperatureSystem.cpp.i"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /mnt/c/Users/Oli/Desktop/HeatingSystem/ATemperatureSystem.cpp > CMakeFiles/ATemperatureSystem.dir/ATemperatureSystem.cpp.i

CMakeFiles/ATemperatureSystem.dir/ATemperatureSystem.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ATemperatureSystem.dir/ATemperatureSystem.cpp.s"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /mnt/c/Users/Oli/Desktop/HeatingSystem/ATemperatureSystem.cpp -o CMakeFiles/ATemperatureSystem.dir/ATemperatureSystem.cpp.s

# Object files for target ATemperatureSystem
ATemperatureSystem_OBJECTS = \
"CMakeFiles/ATemperatureSystem.dir/ATemperatureSystem.cpp.o"

# External object files for target ATemperatureSystem
ATemperatureSystem_EXTERNAL_OBJECTS =

libATemperatureSystem.a: CMakeFiles/ATemperatureSystem.dir/ATemperatureSystem.cpp.o
libATemperatureSystem.a: CMakeFiles/ATemperatureSystem.dir/build.make
libATemperatureSystem.a: CMakeFiles/ATemperatureSystem.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/mnt/c/Users/Oli/Desktop/HeatingSystem/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX static library libATemperatureSystem.a"
	$(CMAKE_COMMAND) -P CMakeFiles/ATemperatureSystem.dir/cmake_clean_target.cmake
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/ATemperatureSystem.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/ATemperatureSystem.dir/build: libATemperatureSystem.a

.PHONY : CMakeFiles/ATemperatureSystem.dir/build

CMakeFiles/ATemperatureSystem.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/ATemperatureSystem.dir/cmake_clean.cmake
.PHONY : CMakeFiles/ATemperatureSystem.dir/clean

CMakeFiles/ATemperatureSystem.dir/depend:
	cd /mnt/c/Users/Oli/Desktop/HeatingSystem/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /mnt/c/Users/Oli/Desktop/HeatingSystem /mnt/c/Users/Oli/Desktop/HeatingSystem /mnt/c/Users/Oli/Desktop/HeatingSystem/build /mnt/c/Users/Oli/Desktop/HeatingSystem/build /mnt/c/Users/Oli/Desktop/HeatingSystem/build/CMakeFiles/ATemperatureSystem.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/ATemperatureSystem.dir/depend

