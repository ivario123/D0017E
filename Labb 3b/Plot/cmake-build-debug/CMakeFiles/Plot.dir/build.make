# CMAKE generated file: DO NOT EDIT!
# Generated by "NMake Makefiles" Generator, CMake Version 3.17

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


.SUFFIXES: .hpux_make_needs_suffix_list


# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

!IF "$(OS)" == "Windows_NT"
NULL=
!ELSE
NULL=nul
!ENDIF
SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = C:\Users\55131\AppData\Local\JetBrains\Toolbox\apps\CLion\ch-0\202.6948.80\bin\cmake\win\bin\cmake.exe

# The command to remove a file.
RM = C:\Users\55131\AppData\Local\JetBrains\Toolbox\apps\CLion\ch-0\202.6948.80\bin\cmake\win\bin\cmake.exe -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "C:\Users\55131\Documents\LTU Kurser\D0017E\Labb 3b\Plot"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "C:\Users\55131\Documents\LTU Kurser\D0017E\Labb 3b\Plot\cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles\Plot.dir\depend.make

# Include the progress variables for this target.
include CMakeFiles\Plot.dir\progress.make

# Include the compile flags for this target's objects.
include CMakeFiles\Plot.dir\flags.make

CMakeFiles\Plot.dir\plot.c.obj: CMakeFiles\Plot.dir\flags.make
CMakeFiles\Plot.dir\plot.c.obj: ..\plot.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="C:\Users\55131\Documents\LTU Kurser\D0017E\Labb 3b\Plot\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/Plot.dir/plot.c.obj"
	C:\PROGRA~2\MICROS~1\2019\COMMUN~1\VC\Tools\MSVC\1426~1.288\bin\Hostx86\x86\cl.exe @<<
 /nologo $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) /FoCMakeFiles\Plot.dir\plot.c.obj /FdCMakeFiles\Plot.dir\ /FS -c "C:\Users\55131\Documents\LTU Kurser\D0017E\Labb 3b\Plot\plot.c"
<<

CMakeFiles\Plot.dir\plot.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/Plot.dir/plot.c.i"
	C:\PROGRA~2\MICROS~1\2019\COMMUN~1\VC\Tools\MSVC\1426~1.288\bin\Hostx86\x86\cl.exe > CMakeFiles\Plot.dir\plot.c.i @<<
 /nologo $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E "C:\Users\55131\Documents\LTU Kurser\D0017E\Labb 3b\Plot\plot.c"
<<

CMakeFiles\Plot.dir\plot.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/Plot.dir/plot.c.s"
	C:\PROGRA~2\MICROS~1\2019\COMMUN~1\VC\Tools\MSVC\1426~1.288\bin\Hostx86\x86\cl.exe @<<
 /nologo $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) /FoNUL /FAs /FaCMakeFiles\Plot.dir\plot.c.s /c "C:\Users\55131\Documents\LTU Kurser\D0017E\Labb 3b\Plot\plot.c"
<<

CMakeFiles\Plot.dir\tga.c.obj: CMakeFiles\Plot.dir\flags.make
CMakeFiles\Plot.dir\tga.c.obj: ..\tga.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="C:\Users\55131\Documents\LTU Kurser\D0017E\Labb 3b\Plot\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Building C object CMakeFiles/Plot.dir/tga.c.obj"
	C:\PROGRA~2\MICROS~1\2019\COMMUN~1\VC\Tools\MSVC\1426~1.288\bin\Hostx86\x86\cl.exe @<<
 /nologo $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) /FoCMakeFiles\Plot.dir\tga.c.obj /FdCMakeFiles\Plot.dir\ /FS -c "C:\Users\55131\Documents\LTU Kurser\D0017E\Labb 3b\Plot\tga.c"
<<

CMakeFiles\Plot.dir\tga.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/Plot.dir/tga.c.i"
	C:\PROGRA~2\MICROS~1\2019\COMMUN~1\VC\Tools\MSVC\1426~1.288\bin\Hostx86\x86\cl.exe > CMakeFiles\Plot.dir\tga.c.i @<<
 /nologo $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E "C:\Users\55131\Documents\LTU Kurser\D0017E\Labb 3b\Plot\tga.c"
<<

CMakeFiles\Plot.dir\tga.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/Plot.dir/tga.c.s"
	C:\PROGRA~2\MICROS~1\2019\COMMUN~1\VC\Tools\MSVC\1426~1.288\bin\Hostx86\x86\cl.exe @<<
 /nologo $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) /FoNUL /FAs /FaCMakeFiles\Plot.dir\tga.c.s /c "C:\Users\55131\Documents\LTU Kurser\D0017E\Labb 3b\Plot\tga.c"
<<

CMakeFiles\Plot.dir\interp1.c.obj: CMakeFiles\Plot.dir\flags.make
CMakeFiles\Plot.dir\interp1.c.obj: ..\interp1.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="C:\Users\55131\Documents\LTU Kurser\D0017E\Labb 3b\Plot\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_3) "Building C object CMakeFiles/Plot.dir/interp1.c.obj"
	C:\PROGRA~2\MICROS~1\2019\COMMUN~1\VC\Tools\MSVC\1426~1.288\bin\Hostx86\x86\cl.exe @<<
 /nologo $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) /FoCMakeFiles\Plot.dir\interp1.c.obj /FdCMakeFiles\Plot.dir\ /FS -c "C:\Users\55131\Documents\LTU Kurser\D0017E\Labb 3b\Plot\interp1.c"
<<

CMakeFiles\Plot.dir\interp1.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/Plot.dir/interp1.c.i"
	C:\PROGRA~2\MICROS~1\2019\COMMUN~1\VC\Tools\MSVC\1426~1.288\bin\Hostx86\x86\cl.exe > CMakeFiles\Plot.dir\interp1.c.i @<<
 /nologo $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E "C:\Users\55131\Documents\LTU Kurser\D0017E\Labb 3b\Plot\interp1.c"
<<

CMakeFiles\Plot.dir\interp1.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/Plot.dir/interp1.c.s"
	C:\PROGRA~2\MICROS~1\2019\COMMUN~1\VC\Tools\MSVC\1426~1.288\bin\Hostx86\x86\cl.exe @<<
 /nologo $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) /FoNUL /FAs /FaCMakeFiles\Plot.dir\interp1.c.s /c "C:\Users\55131\Documents\LTU Kurser\D0017E\Labb 3b\Plot\interp1.c"
<<

# Object files for target Plot
Plot_OBJECTS = \
"CMakeFiles\Plot.dir\plot.c.obj" \
"CMakeFiles\Plot.dir\tga.c.obj" \
"CMakeFiles\Plot.dir\interp1.c.obj"

# External object files for target Plot
Plot_EXTERNAL_OBJECTS =

Plot.exe: CMakeFiles\Plot.dir\plot.c.obj
Plot.exe: CMakeFiles\Plot.dir\tga.c.obj
Plot.exe: CMakeFiles\Plot.dir\interp1.c.obj
Plot.exe: CMakeFiles\Plot.dir\build.make
Plot.exe: CMakeFiles\Plot.dir\objects1.rsp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="C:\Users\55131\Documents\LTU Kurser\D0017E\Labb 3b\Plot\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_4) "Linking C executable Plot.exe"
	C:\Users\55131\AppData\Local\JetBrains\Toolbox\apps\CLion\ch-0\202.6948.80\bin\cmake\win\bin\cmake.exe -E vs_link_exe --intdir=CMakeFiles\Plot.dir --rc=C:\PROGRA~2\WI3CF2~1\10\bin\100183~1.0\x86\rc.exe --mt=C:\PROGRA~2\WI3CF2~1\10\bin\100183~1.0\x86\mt.exe --manifests  -- C:\PROGRA~2\MICROS~1\2019\COMMUN~1\VC\Tools\MSVC\1426~1.288\bin\Hostx86\x86\link.exe /nologo @CMakeFiles\Plot.dir\objects1.rsp @<<
 /out:Plot.exe /implib:Plot.lib /pdb:"C:\Users\55131\Documents\LTU Kurser\D0017E\Labb 3b\Plot\cmake-build-debug\Plot.pdb" /version:0.0  /machine:X86 /debug /INCREMENTAL /subsystem:console  kernel32.lib user32.lib gdi32.lib winspool.lib shell32.lib ole32.lib oleaut32.lib uuid.lib comdlg32.lib advapi32.lib 
<<

# Rule to build all files generated by this target.
CMakeFiles\Plot.dir\build: Plot.exe

.PHONY : CMakeFiles\Plot.dir\build

CMakeFiles\Plot.dir\clean:
	$(CMAKE_COMMAND) -P CMakeFiles\Plot.dir\cmake_clean.cmake
.PHONY : CMakeFiles\Plot.dir\clean

CMakeFiles\Plot.dir\depend:
	$(CMAKE_COMMAND) -E cmake_depends "NMake Makefiles" "C:\Users\55131\Documents\LTU Kurser\D0017E\Labb 3b\Plot" "C:\Users\55131\Documents\LTU Kurser\D0017E\Labb 3b\Plot" "C:\Users\55131\Documents\LTU Kurser\D0017E\Labb 3b\Plot\cmake-build-debug" "C:\Users\55131\Documents\LTU Kurser\D0017E\Labb 3b\Plot\cmake-build-debug" "C:\Users\55131\Documents\LTU Kurser\D0017E\Labb 3b\Plot\cmake-build-debug\CMakeFiles\Plot.dir\DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles\Plot.dir\depend
