# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.24

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

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = D:\Cmake\bin\cmake.exe

# The command to remove a file.
RM = D:\Cmake\bin\cmake.exe -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = D:\my-folder\documents\projects\C++\dev\MusicPlayer

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = D:\my-folder\documents\projects\C++\dev\MusicPlayer\debug

# Utility rule file for MusicPlayer_autogen.

# Include any custom commands dependencies for this target.
include CMakeFiles/MusicPlayer_autogen.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/MusicPlayer_autogen.dir/progress.make

CMakeFiles/MusicPlayer_autogen:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=D:\my-folder\documents\projects\C++\dev\MusicPlayer\debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Automatic MOC and UIC for target MusicPlayer"
	D:\Cmake\bin\cmake.exe -E cmake_autogen D:/my-folder/documents/projects/C++/dev/MusicPlayer/debug/CMakeFiles/MusicPlayer_autogen.dir/AutogenInfo.json ""

MusicPlayer_autogen: CMakeFiles/MusicPlayer_autogen
MusicPlayer_autogen: CMakeFiles/MusicPlayer_autogen.dir/build.make
.PHONY : MusicPlayer_autogen

# Rule to build all files generated by this target.
CMakeFiles/MusicPlayer_autogen.dir/build: MusicPlayer_autogen
.PHONY : CMakeFiles/MusicPlayer_autogen.dir/build

CMakeFiles/MusicPlayer_autogen.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\MusicPlayer_autogen.dir\cmake_clean.cmake
.PHONY : CMakeFiles/MusicPlayer_autogen.dir/clean

CMakeFiles/MusicPlayer_autogen.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" D:\my-folder\documents\projects\C++\dev\MusicPlayer D:\my-folder\documents\projects\C++\dev\MusicPlayer D:\my-folder\documents\projects\C++\dev\MusicPlayer\debug D:\my-folder\documents\projects\C++\dev\MusicPlayer\debug D:\my-folder\documents\projects\C++\dev\MusicPlayer\debug\CMakeFiles\MusicPlayer_autogen.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/MusicPlayer_autogen.dir/depend
