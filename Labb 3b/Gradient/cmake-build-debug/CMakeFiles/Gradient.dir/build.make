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
CMAKE_SOURCE_DIR = "C:\Users\55131\Documents\LTU Kurser\D0017E\Labb 3b\Gradient"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "C:\Users\55131\Documents\LTU Kurser\D0017E\Labb 3b\Gradient\cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles\Gradient.dir\depend.make

# Include the progress variables for this target.
include CMakeFiles\Gradient.dir\progress.make

# Include the compile flags for this target's objects.
include CMakeFiles\Gradient.dir\flags.make

CMakeFiles\Gradient.dir\gradient.c.obj: CMakeFiles\Gradient.dir\flags.make
CMakeFiles\Gradient.dir\gradient.c.obj: ..\gradient.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="C:\Users\55131\Documents\LTU Kurser\D0017E\Labb 3b\Gradient\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/Gradient.dir/gradient.c.obj"
	C:\PROGRA~2\MICROS~1\2019\COMMUN~1\VC\Tools\MSVC\1426~1.288\bin\Hostx86\x86\cl.exe @<<
 /nologo $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) /FoCMakeFiles\Gradient.dir\gradient.c.obj /FdCMakeFiles\Gradient.dir\ /FS -c "C:\Users\55131\Documents\LTU Kurser\D0017E\Labb 3b\Gradient\gradient.c"
<<

CMakeFiles\Gradient.dir\gradient.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/Gradient.dir/gradient.c.i"
	C:\PROGRA~2\MICROS~1\2019\COMMUN~1\VC\Tools\MSVC\1426~1.288\bin\Hostx86\x86\cl.exe > CMakeFiles\Gradient.dir\gradient.c.i @<<
 /nologo $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E "C:\Users\55131\Documents\LTU Kurser\D0017E\Labb 3b\Gradient\gradient.c"
<<

CMakeFiles\Gradient.dir\gradient.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/Gradient.dir/gradient.c.s"
	C:\PROGRA~2\MICROS~1\2019\COMMUN~1\VC\Tools\MSVC\1426~1.288\bin\Hostx86\x86\cl.exe @<<
 /nologo $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) /FoNUL /FAs /FaCMakeFiles\Gradient.dir\gradient.c.s /c "C:\Users\55131\Documents\LTU Kurser\D0017E\Labb 3b\Gradient\gradient.c"
<<

CMakeFiles\Gradient.dir\tga.c.obj: CMakeFiles\Gradient.dir\flags.make
CMakeFiles\Gradient.dir\tga.c.obj: ..\tga.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="C:\Users\55131\Documents\LTU Kurser\D0017E\Labb 3b\Gradient\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Building C object CMakeFiles/Gradient.dir/tga.c.obj"
	C:\PROGRA~2\MICROS~1\2019\COMMUN~1\VC\Tools\MSVC\1426~1.288\bin\Hostx86\x86\cl.exe @<<
 /nologo $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) /FoCMakeFiles\Gradient.dir\tga.c.obj /FdCMakeFiles\Gradient.dir\ /FS -c "C:\Users\55131\Documents\LTU Kurser\D0017E\Labb 3b\Gradient\tga.c"
<<

CMakeFiles\Gradient.dir\tga.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/Gradient.dir/tga.c.i"
	C:\PROGRA~2\MICROS~1\2019\COMMUN~1\VC\Tools\MSVC\1426~1.288\bin\Hostx86\x86\cl.exe > CMakeFiles\Gradient.dir\tga.c.i @<<
 /nologo $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E "C:\Users\55131\Documents\LTU Kurser\D0017E\Labb 3b\Gradient\tga.c"
<<

CMakeFiles\Gradient.dir\tga.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/Gradient.dir/tga.c.s"
	C:\PROGRA~2\MICROS~1\2019\COMMUN~1\VC\Tools\MSVC\1426~1.288\bin\Hostx86\x86\cl.exe @<<
 /nologo $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) /FoNUL /FAs /FaCMakeFiles\Gradient.dir\tga.c.s /c "C:\Users\55131\Documents\LTU Kurser\D0017E\Labb 3b\Gradient\tga.c"
<<

# Object files for target Gradient
Gradient_OBJECTS = \
"CMakeFiles\Gradient.dir\gradient.c.obj" \
"CMakeFiles\Gradient.dir\tga.c.obj"

# External object files for target Gradient
Gradient_EXTERNAL_OBJECTS =

Gradient.exe: CMakeFiles\Gradient.dir\gradient.c.obj
Gradient.exe: CMakeFiles\Gradient.dir\tga.c.obj
Gradient.exe: CMakeFiles\Gradient.dir\build.make
Gradient.exe: CMakeFiles\Gradient.dir\objects1.rsp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="C:\Users\55131\Documents\LTU Kurser\D0017E\Labb 3b\Gradient\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_3) "Linking C executable Gradient.exe"
	C:\Users\55131\AppData\Local\JetBrains\Toolbox\apps\CLion\ch-0\202.6948.80\bin\cmake\win\bin\cmake.exe -E vs_link_exe --intdir=CMakeFiles\Gradient.dir --rc=C:\PROGRA~2\WI3CF2~1\10\bin\100183~1.0\x86\rc.exe --mt=C:\PROGRA~2\WI3CF2~1\10\bin\100183~1.0\x86\mt.exe --manifests  -- C:\PROGRA~2\MICROS~1\2019\COMMUN~1\VC\Tools\MSVC\1426~1.288\bin\Hostx86\x86\link.exe /nologo @CMakeFiles\Gradient.dir\objects1.rsp @<<
 /out:Gradient.exe /implib:Gradient.lib /pdb:"C:\Users\55131\Documents\LTU Kurser\D0017E\Labb 3b\Gradient\cmake-build-debug\Gradient.pdb" /version:0.0  /machine:X86 /debug /INCREMENTAL /subsystem:console  kernel32.lib user32.lib gdi32.lib winspool.lib shell32.lib ole32.lib oleaut32.lib uuid.lib comdlg32.lib advapi32.lib 
<<

# Rule to build all files generated by this target.
CMakeFiles\Gradient.dir\build: Gradient.exe

.PHONY : CMakeFiles\Gradient.dir\build

CMakeFiles\Gradient.dir\clean:
	$(CMAKE_COMMAND) -P CMakeFiles\Gradient.dir\cmake_clean.cmake
.PHONY : CMakeFiles\Gradient.dir\clean

CMakeFiles\Gradient.dir\depend:
	$(CMAKE_COMMAND) -E cmake_depends "NMake Makefiles" "C:\Users\55131\Documents\LTU Kurser\D0017E\Labb 3b\Gradient" "C:\Users\55131\Documents\LTU Kurser\D0017E\Labb 3b\Gradient" "C:\Users\55131\Documents\LTU Kurser\D0017E\Labb 3b\Gradient\cmake-build-debug" "C:\Users\55131\Documents\LTU Kurser\D0017E\Labb 3b\Gradient\cmake-build-debug" "C:\Users\55131\Documents\LTU Kurser\D0017E\Labb 3b\Gradient\cmake-build-debug\CMakeFiles\Gradient.dir\DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles\Gradient.dir\depend
