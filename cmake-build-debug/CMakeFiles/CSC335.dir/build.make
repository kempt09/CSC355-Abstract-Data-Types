# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.6

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
CMAKE_COMMAND = /Applications/CLion.app/Contents/bin/cmake/bin/cmake

# The command to remove a file.
RM = /Applications/CLion.app/Contents/bin/cmake/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/chriskempton/ClionProjects/CSC335

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/chriskempton/ClionProjects/CSC335/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/CSC335.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/CSC335.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/CSC335.dir/flags.make

CMakeFiles/CSC335.dir/main.cpp.o: CMakeFiles/CSC335.dir/flags.make
CMakeFiles/CSC335.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/chriskempton/ClionProjects/CSC335/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/CSC335.dir/main.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/CSC335.dir/main.cpp.o -c /Users/chriskempton/ClionProjects/CSC335/main.cpp

CMakeFiles/CSC335.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/CSC335.dir/main.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/chriskempton/ClionProjects/CSC335/main.cpp > CMakeFiles/CSC335.dir/main.cpp.i

CMakeFiles/CSC335.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/CSC335.dir/main.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/chriskempton/ClionProjects/CSC335/main.cpp -o CMakeFiles/CSC335.dir/main.cpp.s

CMakeFiles/CSC335.dir/main.cpp.o.requires:

.PHONY : CMakeFiles/CSC335.dir/main.cpp.o.requires

CMakeFiles/CSC335.dir/main.cpp.o.provides: CMakeFiles/CSC335.dir/main.cpp.o.requires
	$(MAKE) -f CMakeFiles/CSC335.dir/build.make CMakeFiles/CSC335.dir/main.cpp.o.provides.build
.PHONY : CMakeFiles/CSC335.dir/main.cpp.o.provides

CMakeFiles/CSC335.dir/main.cpp.o.provides.build: CMakeFiles/CSC335.dir/main.cpp.o


CMakeFiles/CSC335.dir/linkedlist/linkedList.cpp.o: CMakeFiles/CSC335.dir/flags.make
CMakeFiles/CSC335.dir/linkedlist/linkedList.cpp.o: ../linkedlist/linkedList.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/chriskempton/ClionProjects/CSC335/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/CSC335.dir/linkedlist/linkedList.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/CSC335.dir/linkedlist/linkedList.cpp.o -c /Users/chriskempton/ClionProjects/CSC335/linkedlist/linkedList.cpp

CMakeFiles/CSC335.dir/linkedlist/linkedList.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/CSC335.dir/linkedlist/linkedList.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/chriskempton/ClionProjects/CSC335/linkedlist/linkedList.cpp > CMakeFiles/CSC335.dir/linkedlist/linkedList.cpp.i

CMakeFiles/CSC335.dir/linkedlist/linkedList.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/CSC335.dir/linkedlist/linkedList.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/chriskempton/ClionProjects/CSC335/linkedlist/linkedList.cpp -o CMakeFiles/CSC335.dir/linkedlist/linkedList.cpp.s

CMakeFiles/CSC335.dir/linkedlist/linkedList.cpp.o.requires:

.PHONY : CMakeFiles/CSC335.dir/linkedlist/linkedList.cpp.o.requires

CMakeFiles/CSC335.dir/linkedlist/linkedList.cpp.o.provides: CMakeFiles/CSC335.dir/linkedlist/linkedList.cpp.o.requires
	$(MAKE) -f CMakeFiles/CSC335.dir/build.make CMakeFiles/CSC335.dir/linkedlist/linkedList.cpp.o.provides.build
.PHONY : CMakeFiles/CSC335.dir/linkedlist/linkedList.cpp.o.provides

CMakeFiles/CSC335.dir/linkedlist/linkedList.cpp.o.provides.build: CMakeFiles/CSC335.dir/linkedlist/linkedList.cpp.o


CMakeFiles/CSC335.dir/queue/queue.cpp.o: CMakeFiles/CSC335.dir/flags.make
CMakeFiles/CSC335.dir/queue/queue.cpp.o: ../queue/queue.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/chriskempton/ClionProjects/CSC335/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/CSC335.dir/queue/queue.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/CSC335.dir/queue/queue.cpp.o -c /Users/chriskempton/ClionProjects/CSC335/queue/queue.cpp

CMakeFiles/CSC335.dir/queue/queue.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/CSC335.dir/queue/queue.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/chriskempton/ClionProjects/CSC335/queue/queue.cpp > CMakeFiles/CSC335.dir/queue/queue.cpp.i

CMakeFiles/CSC335.dir/queue/queue.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/CSC335.dir/queue/queue.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/chriskempton/ClionProjects/CSC335/queue/queue.cpp -o CMakeFiles/CSC335.dir/queue/queue.cpp.s

CMakeFiles/CSC335.dir/queue/queue.cpp.o.requires:

.PHONY : CMakeFiles/CSC335.dir/queue/queue.cpp.o.requires

CMakeFiles/CSC335.dir/queue/queue.cpp.o.provides: CMakeFiles/CSC335.dir/queue/queue.cpp.o.requires
	$(MAKE) -f CMakeFiles/CSC335.dir/build.make CMakeFiles/CSC335.dir/queue/queue.cpp.o.provides.build
.PHONY : CMakeFiles/CSC335.dir/queue/queue.cpp.o.provides

CMakeFiles/CSC335.dir/queue/queue.cpp.o.provides.build: CMakeFiles/CSC335.dir/queue/queue.cpp.o


CMakeFiles/CSC335.dir/stack/Stack.cpp.o: CMakeFiles/CSC335.dir/flags.make
CMakeFiles/CSC335.dir/stack/Stack.cpp.o: ../stack/Stack.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/chriskempton/ClionProjects/CSC335/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/CSC335.dir/stack/Stack.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/CSC335.dir/stack/Stack.cpp.o -c /Users/chriskempton/ClionProjects/CSC335/stack/Stack.cpp

CMakeFiles/CSC335.dir/stack/Stack.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/CSC335.dir/stack/Stack.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/chriskempton/ClionProjects/CSC335/stack/Stack.cpp > CMakeFiles/CSC335.dir/stack/Stack.cpp.i

CMakeFiles/CSC335.dir/stack/Stack.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/CSC335.dir/stack/Stack.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/chriskempton/ClionProjects/CSC335/stack/Stack.cpp -o CMakeFiles/CSC335.dir/stack/Stack.cpp.s

CMakeFiles/CSC335.dir/stack/Stack.cpp.o.requires:

.PHONY : CMakeFiles/CSC335.dir/stack/Stack.cpp.o.requires

CMakeFiles/CSC335.dir/stack/Stack.cpp.o.provides: CMakeFiles/CSC335.dir/stack/Stack.cpp.o.requires
	$(MAKE) -f CMakeFiles/CSC335.dir/build.make CMakeFiles/CSC335.dir/stack/Stack.cpp.o.provides.build
.PHONY : CMakeFiles/CSC335.dir/stack/Stack.cpp.o.provides

CMakeFiles/CSC335.dir/stack/Stack.cpp.o.provides.build: CMakeFiles/CSC335.dir/stack/Stack.cpp.o


CMakeFiles/CSC335.dir/list/List.cpp.o: CMakeFiles/CSC335.dir/flags.make
CMakeFiles/CSC335.dir/list/List.cpp.o: ../list/List.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/chriskempton/ClionProjects/CSC335/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/CSC335.dir/list/List.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/CSC335.dir/list/List.cpp.o -c /Users/chriskempton/ClionProjects/CSC335/list/List.cpp

CMakeFiles/CSC335.dir/list/List.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/CSC335.dir/list/List.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/chriskempton/ClionProjects/CSC335/list/List.cpp > CMakeFiles/CSC335.dir/list/List.cpp.i

CMakeFiles/CSC335.dir/list/List.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/CSC335.dir/list/List.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/chriskempton/ClionProjects/CSC335/list/List.cpp -o CMakeFiles/CSC335.dir/list/List.cpp.s

CMakeFiles/CSC335.dir/list/List.cpp.o.requires:

.PHONY : CMakeFiles/CSC335.dir/list/List.cpp.o.requires

CMakeFiles/CSC335.dir/list/List.cpp.o.provides: CMakeFiles/CSC335.dir/list/List.cpp.o.requires
	$(MAKE) -f CMakeFiles/CSC335.dir/build.make CMakeFiles/CSC335.dir/list/List.cpp.o.provides.build
.PHONY : CMakeFiles/CSC335.dir/list/List.cpp.o.provides

CMakeFiles/CSC335.dir/list/List.cpp.o.provides.build: CMakeFiles/CSC335.dir/list/List.cpp.o


CMakeFiles/CSC335.dir/linkedstack/LinkedStack.cpp.o: CMakeFiles/CSC335.dir/flags.make
CMakeFiles/CSC335.dir/linkedstack/LinkedStack.cpp.o: ../linkedstack/LinkedStack.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/chriskempton/ClionProjects/CSC335/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object CMakeFiles/CSC335.dir/linkedstack/LinkedStack.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/CSC335.dir/linkedstack/LinkedStack.cpp.o -c /Users/chriskempton/ClionProjects/CSC335/linkedstack/LinkedStack.cpp

CMakeFiles/CSC335.dir/linkedstack/LinkedStack.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/CSC335.dir/linkedstack/LinkedStack.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/chriskempton/ClionProjects/CSC335/linkedstack/LinkedStack.cpp > CMakeFiles/CSC335.dir/linkedstack/LinkedStack.cpp.i

CMakeFiles/CSC335.dir/linkedstack/LinkedStack.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/CSC335.dir/linkedstack/LinkedStack.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/chriskempton/ClionProjects/CSC335/linkedstack/LinkedStack.cpp -o CMakeFiles/CSC335.dir/linkedstack/LinkedStack.cpp.s

CMakeFiles/CSC335.dir/linkedstack/LinkedStack.cpp.o.requires:

.PHONY : CMakeFiles/CSC335.dir/linkedstack/LinkedStack.cpp.o.requires

CMakeFiles/CSC335.dir/linkedstack/LinkedStack.cpp.o.provides: CMakeFiles/CSC335.dir/linkedstack/LinkedStack.cpp.o.requires
	$(MAKE) -f CMakeFiles/CSC335.dir/build.make CMakeFiles/CSC335.dir/linkedstack/LinkedStack.cpp.o.provides.build
.PHONY : CMakeFiles/CSC335.dir/linkedstack/LinkedStack.cpp.o.provides

CMakeFiles/CSC335.dir/linkedstack/LinkedStack.cpp.o.provides.build: CMakeFiles/CSC335.dir/linkedstack/LinkedStack.cpp.o


CMakeFiles/CSC335.dir/linkedqueue/LinkedQueue.cpp.o: CMakeFiles/CSC335.dir/flags.make
CMakeFiles/CSC335.dir/linkedqueue/LinkedQueue.cpp.o: ../linkedqueue/LinkedQueue.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/chriskempton/ClionProjects/CSC335/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building CXX object CMakeFiles/CSC335.dir/linkedqueue/LinkedQueue.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/CSC335.dir/linkedqueue/LinkedQueue.cpp.o -c /Users/chriskempton/ClionProjects/CSC335/linkedqueue/LinkedQueue.cpp

CMakeFiles/CSC335.dir/linkedqueue/LinkedQueue.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/CSC335.dir/linkedqueue/LinkedQueue.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/chriskempton/ClionProjects/CSC335/linkedqueue/LinkedQueue.cpp > CMakeFiles/CSC335.dir/linkedqueue/LinkedQueue.cpp.i

CMakeFiles/CSC335.dir/linkedqueue/LinkedQueue.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/CSC335.dir/linkedqueue/LinkedQueue.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/chriskempton/ClionProjects/CSC335/linkedqueue/LinkedQueue.cpp -o CMakeFiles/CSC335.dir/linkedqueue/LinkedQueue.cpp.s

CMakeFiles/CSC335.dir/linkedqueue/LinkedQueue.cpp.o.requires:

.PHONY : CMakeFiles/CSC335.dir/linkedqueue/LinkedQueue.cpp.o.requires

CMakeFiles/CSC335.dir/linkedqueue/LinkedQueue.cpp.o.provides: CMakeFiles/CSC335.dir/linkedqueue/LinkedQueue.cpp.o.requires
	$(MAKE) -f CMakeFiles/CSC335.dir/build.make CMakeFiles/CSC335.dir/linkedqueue/LinkedQueue.cpp.o.provides.build
.PHONY : CMakeFiles/CSC335.dir/linkedqueue/LinkedQueue.cpp.o.provides

CMakeFiles/CSC335.dir/linkedqueue/LinkedQueue.cpp.o.provides.build: CMakeFiles/CSC335.dir/linkedqueue/LinkedQueue.cpp.o


# Object files for target CSC335
CSC335_OBJECTS = \
"CMakeFiles/CSC335.dir/main.cpp.o" \
"CMakeFiles/CSC335.dir/linkedlist/linkedList.cpp.o" \
"CMakeFiles/CSC335.dir/queue/queue.cpp.o" \
"CMakeFiles/CSC335.dir/stack/Stack.cpp.o" \
"CMakeFiles/CSC335.dir/list/List.cpp.o" \
"CMakeFiles/CSC335.dir/linkedstack/LinkedStack.cpp.o" \
"CMakeFiles/CSC335.dir/linkedqueue/LinkedQueue.cpp.o"

# External object files for target CSC335
CSC335_EXTERNAL_OBJECTS =

CSC335: CMakeFiles/CSC335.dir/main.cpp.o
CSC335: CMakeFiles/CSC335.dir/linkedlist/linkedList.cpp.o
CSC335: CMakeFiles/CSC335.dir/queue/queue.cpp.o
CSC335: CMakeFiles/CSC335.dir/stack/Stack.cpp.o
CSC335: CMakeFiles/CSC335.dir/list/List.cpp.o
CSC335: CMakeFiles/CSC335.dir/linkedstack/LinkedStack.cpp.o
CSC335: CMakeFiles/CSC335.dir/linkedqueue/LinkedQueue.cpp.o
CSC335: CMakeFiles/CSC335.dir/build.make
CSC335: CMakeFiles/CSC335.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/chriskempton/ClionProjects/CSC335/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Linking CXX executable CSC335"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/CSC335.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/CSC335.dir/build: CSC335

.PHONY : CMakeFiles/CSC335.dir/build

CMakeFiles/CSC335.dir/requires: CMakeFiles/CSC335.dir/main.cpp.o.requires
CMakeFiles/CSC335.dir/requires: CMakeFiles/CSC335.dir/linkedlist/linkedList.cpp.o.requires
CMakeFiles/CSC335.dir/requires: CMakeFiles/CSC335.dir/queue/queue.cpp.o.requires
CMakeFiles/CSC335.dir/requires: CMakeFiles/CSC335.dir/stack/Stack.cpp.o.requires
CMakeFiles/CSC335.dir/requires: CMakeFiles/CSC335.dir/list/List.cpp.o.requires
CMakeFiles/CSC335.dir/requires: CMakeFiles/CSC335.dir/linkedstack/LinkedStack.cpp.o.requires
CMakeFiles/CSC335.dir/requires: CMakeFiles/CSC335.dir/linkedqueue/LinkedQueue.cpp.o.requires

.PHONY : CMakeFiles/CSC335.dir/requires

CMakeFiles/CSC335.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/CSC335.dir/cmake_clean.cmake
.PHONY : CMakeFiles/CSC335.dir/clean

CMakeFiles/CSC335.dir/depend:
	cd /Users/chriskempton/ClionProjects/CSC335/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/chriskempton/ClionProjects/CSC335 /Users/chriskempton/ClionProjects/CSC335 /Users/chriskempton/ClionProjects/CSC335/cmake-build-debug /Users/chriskempton/ClionProjects/CSC335/cmake-build-debug /Users/chriskempton/ClionProjects/CSC335/cmake-build-debug/CMakeFiles/CSC335.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/CSC335.dir/depend
