# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.15

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

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2019.3.4\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2019.3.4\bin\cmake\win\bin\cmake.exe" -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = D:\Guillaume\Taff\CPlusFaux

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = D:\Guillaume\Taff\CPlusFaux\cmake-build-debug-mingw

# Include any dependencies generated for this target.
include CMakeFiles/CPlusFaux.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/CPlusFaux.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/CPlusFaux.dir/flags.make

CMakeFiles/CPlusFaux.dir/main.cpp.obj: CMakeFiles/CPlusFaux.dir/flags.make
CMakeFiles/CPlusFaux.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\Guillaume\Taff\CPlusFaux\cmake-build-debug-mingw\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/CPlusFaux.dir/main.cpp.obj"
	C:\mingw-w64\i686-8.1.0-posix-dwarf-rt_v6-rev0\mingw32\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\CPlusFaux.dir\main.cpp.obj -c D:\Guillaume\Taff\CPlusFaux\main.cpp

CMakeFiles/CPlusFaux.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/CPlusFaux.dir/main.cpp.i"
	C:\mingw-w64\i686-8.1.0-posix-dwarf-rt_v6-rev0\mingw32\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E D:\Guillaume\Taff\CPlusFaux\main.cpp > CMakeFiles\CPlusFaux.dir\main.cpp.i

CMakeFiles/CPlusFaux.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/CPlusFaux.dir/main.cpp.s"
	C:\mingw-w64\i686-8.1.0-posix-dwarf-rt_v6-rev0\mingw32\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S D:\Guillaume\Taff\CPlusFaux\main.cpp -o CMakeFiles\CPlusFaux.dir\main.cpp.s

CMakeFiles/CPlusFaux.dir/Calculator.cpp.obj: CMakeFiles/CPlusFaux.dir/flags.make
CMakeFiles/CPlusFaux.dir/Calculator.cpp.obj: ../Calculator.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\Guillaume\Taff\CPlusFaux\cmake-build-debug-mingw\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/CPlusFaux.dir/Calculator.cpp.obj"
	C:\mingw-w64\i686-8.1.0-posix-dwarf-rt_v6-rev0\mingw32\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\CPlusFaux.dir\Calculator.cpp.obj -c D:\Guillaume\Taff\CPlusFaux\Calculator.cpp

CMakeFiles/CPlusFaux.dir/Calculator.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/CPlusFaux.dir/Calculator.cpp.i"
	C:\mingw-w64\i686-8.1.0-posix-dwarf-rt_v6-rev0\mingw32\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E D:\Guillaume\Taff\CPlusFaux\Calculator.cpp > CMakeFiles\CPlusFaux.dir\Calculator.cpp.i

CMakeFiles/CPlusFaux.dir/Calculator.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/CPlusFaux.dir/Calculator.cpp.s"
	C:\mingw-w64\i686-8.1.0-posix-dwarf-rt_v6-rev0\mingw32\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S D:\Guillaume\Taff\CPlusFaux\Calculator.cpp -o CMakeFiles\CPlusFaux.dir\Calculator.cpp.s

# Object files for target CPlusFaux
CPlusFaux_OBJECTS = \
"CMakeFiles/CPlusFaux.dir/main.cpp.obj" \
"CMakeFiles/CPlusFaux.dir/Calculator.cpp.obj"

# External object files for target CPlusFaux
CPlusFaux_EXTERNAL_OBJECTS =

CPlusFaux.exe: CMakeFiles/CPlusFaux.dir/main.cpp.obj
CPlusFaux.exe: CMakeFiles/CPlusFaux.dir/Calculator.cpp.obj
CPlusFaux.exe: CMakeFiles/CPlusFaux.dir/build.make
CPlusFaux.exe: CMakeFiles/CPlusFaux.dir/linklibs.rsp
CPlusFaux.exe: CMakeFiles/CPlusFaux.dir/objects1.rsp
CPlusFaux.exe: CMakeFiles/CPlusFaux.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=D:\Guillaume\Taff\CPlusFaux\cmake-build-debug-mingw\CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable CPlusFaux.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\CPlusFaux.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/CPlusFaux.dir/build: CPlusFaux.exe

.PHONY : CMakeFiles/CPlusFaux.dir/build

CMakeFiles/CPlusFaux.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\CPlusFaux.dir\cmake_clean.cmake
.PHONY : CMakeFiles/CPlusFaux.dir/clean

CMakeFiles/CPlusFaux.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" D:\Guillaume\Taff\CPlusFaux D:\Guillaume\Taff\CPlusFaux D:\Guillaume\Taff\CPlusFaux\cmake-build-debug-mingw D:\Guillaume\Taff\CPlusFaux\cmake-build-debug-mingw D:\Guillaume\Taff\CPlusFaux\cmake-build-debug-mingw\CMakeFiles\CPlusFaux.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/CPlusFaux.dir/depend

