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
include CMakeFiles/IException.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/IException.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/IException.dir/flags.make

CMakeFiles/IException.dir/IException.cpp.o: CMakeFiles/IException.dir/flags.make
CMakeFiles/IException.dir/IException.cpp.o: ../IException.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/mnt/c/Users/Oli/Desktop/HeatingSystem/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/IException.dir/IException.cpp.o"
	/usr/bin/g++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/IException.dir/IException.cpp.o -c /mnt/c/Users/Oli/Desktop/HeatingSystem/IException.cpp

CMakeFiles/IException.dir/IException.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/IException.dir/IException.cpp.i"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /mnt/c/Users/Oli/Desktop/HeatingSystem/IException.cpp > CMakeFiles/IException.dir/IException.cpp.i

CMakeFiles/IException.dir/IException.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/IException.dir/IException.cpp.s"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /mnt/c/Users/Oli/Desktop/HeatingSystem/IException.cpp -o CMakeFiles/IException.dir/IException.cpp.s

# Object files for target IException
IException_OBJECTS = \
"CMakeFiles/IException.dir/IException.cpp.o"

# External object files for target IException
IException_EXTERNAL_OBJECTS =

libIException.a: CMakeFiles/IException.dir/IException.cpp.o
libIException.a: CMakeFiles/IException.dir/build.make
libIException.a: CMakeFiles/IException.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/mnt/c/Users/Oli/Desktop/HeatingSystem/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX static library libIException.a"
	$(CMAKE_COMMAND) -P CMakeFiles/IException.dir/cmake_clean_target.cmake
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/IException.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/IException.dir/build: libIException.a

.PHONY : CMakeFiles/IException.dir/build

CMakeFiles/IException.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/IException.dir/cmake_clean.cmake
.PHONY : CMakeFiles/IException.dir/clean

CMakeFiles/IException.dir/depend:
	cd /mnt/c/Users/Oli/Desktop/HeatingSystem/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /mnt/c/Users/Oli/Desktop/HeatingSystem /mnt/c/Users/Oli/Desktop/HeatingSystem /mnt/c/Users/Oli/Desktop/HeatingSystem/build /mnt/c/Users/Oli/Desktop/HeatingSystem/build /mnt/c/Users/Oli/Desktop/HeatingSystem/build/CMakeFiles/IException.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/IException.dir/depend

