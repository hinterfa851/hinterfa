# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.15

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
CMAKE_COMMAND = /home/tie-run/Документы/clion-2019.2.5/bin/cmake/linux/bin/cmake

# The command to remove a file.
RM = /home/tie-run/Документы/clion-2019.2.5/bin/cmake/linux/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/tie-run/school21/fillit

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/tie-run/school21/fillit/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/fillit.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/fillit.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/fillit.dir/flags.make

CMakeFiles/fillit.dir/main.c.o: CMakeFiles/fillit.dir/flags.make
CMakeFiles/fillit.dir/main.c.o: ../main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/tie-run/school21/fillit/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/fillit.dir/main.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/fillit.dir/main.c.o   -c /home/tie-run/school21/fillit/main.c

CMakeFiles/fillit.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/fillit.dir/main.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/tie-run/school21/fillit/main.c > CMakeFiles/fillit.dir/main.c.i

CMakeFiles/fillit.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/fillit.dir/main.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/tie-run/school21/fillit/main.c -o CMakeFiles/fillit.dir/main.c.s

CMakeFiles/fillit.dir/library.c.o: CMakeFiles/fillit.dir/flags.make
CMakeFiles/fillit.dir/library.c.o: ../library.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/tie-run/school21/fillit/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building C object CMakeFiles/fillit.dir/library.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/fillit.dir/library.c.o   -c /home/tie-run/school21/fillit/library.c

CMakeFiles/fillit.dir/library.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/fillit.dir/library.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/tie-run/school21/fillit/library.c > CMakeFiles/fillit.dir/library.c.i

CMakeFiles/fillit.dir/library.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/fillit.dir/library.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/tie-run/school21/fillit/library.c -o CMakeFiles/fillit.dir/library.c.s

# Object files for target fillit
fillit_OBJECTS = \
"CMakeFiles/fillit.dir/main.c.o" \
"CMakeFiles/fillit.dir/library.c.o"

# External object files for target fillit
fillit_EXTERNAL_OBJECTS =

fillit: CMakeFiles/fillit.dir/main.c.o
fillit: CMakeFiles/fillit.dir/library.c.o
fillit: CMakeFiles/fillit.dir/build.make
fillit: libfood.a
fillit: CMakeFiles/fillit.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/tie-run/school21/fillit/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking C executable fillit"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/fillit.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/fillit.dir/build: fillit

.PHONY : CMakeFiles/fillit.dir/build

CMakeFiles/fillit.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/fillit.dir/cmake_clean.cmake
.PHONY : CMakeFiles/fillit.dir/clean

CMakeFiles/fillit.dir/depend:
	cd /home/tie-run/school21/fillit/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/tie-run/school21/fillit /home/tie-run/school21/fillit /home/tie-run/school21/fillit/cmake-build-debug /home/tie-run/school21/fillit/cmake-build-debug /home/tie-run/school21/fillit/cmake-build-debug/CMakeFiles/fillit.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/fillit.dir/depend

