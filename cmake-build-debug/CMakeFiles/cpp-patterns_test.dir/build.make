# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.14

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
CMAKE_COMMAND = /snap/clion/82/bin/cmake/linux/bin/cmake

# The command to remove a file.
RM = /snap/clion/82/bin/cmake/linux/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/bas/Projects/cpp_patterns

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/bas/Projects/cpp_patterns/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/cpp-patterns_test.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/cpp-patterns_test.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/cpp-patterns_test.dir/flags.make

CMakeFiles/cpp-patterns_test.dir/test/main.cpp.o: CMakeFiles/cpp-patterns_test.dir/flags.make
CMakeFiles/cpp-patterns_test.dir/test/main.cpp.o: ../test/main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/bas/Projects/cpp_patterns/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/cpp-patterns_test.dir/test/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/cpp-patterns_test.dir/test/main.cpp.o -c /home/bas/Projects/cpp_patterns/test/main.cpp

CMakeFiles/cpp-patterns_test.dir/test/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/cpp-patterns_test.dir/test/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/bas/Projects/cpp_patterns/test/main.cpp > CMakeFiles/cpp-patterns_test.dir/test/main.cpp.i

CMakeFiles/cpp-patterns_test.dir/test/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/cpp-patterns_test.dir/test/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/bas/Projects/cpp_patterns/test/main.cpp -o CMakeFiles/cpp-patterns_test.dir/test/main.cpp.s

CMakeFiles/cpp-patterns_test.dir/test/messages/argument_holder/test_argument_ArgumentHolder.cpp.o: CMakeFiles/cpp-patterns_test.dir/flags.make
CMakeFiles/cpp-patterns_test.dir/test/messages/argument_holder/test_argument_ArgumentHolder.cpp.o: ../test/messages/argument_holder/test_argument_ArgumentHolder.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/bas/Projects/cpp_patterns/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/cpp-patterns_test.dir/test/messages/argument_holder/test_argument_ArgumentHolder.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/cpp-patterns_test.dir/test/messages/argument_holder/test_argument_ArgumentHolder.cpp.o -c /home/bas/Projects/cpp_patterns/test/messages/argument_holder/test_argument_ArgumentHolder.cpp

CMakeFiles/cpp-patterns_test.dir/test/messages/argument_holder/test_argument_ArgumentHolder.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/cpp-patterns_test.dir/test/messages/argument_holder/test_argument_ArgumentHolder.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/bas/Projects/cpp_patterns/test/messages/argument_holder/test_argument_ArgumentHolder.cpp > CMakeFiles/cpp-patterns_test.dir/test/messages/argument_holder/test_argument_ArgumentHolder.cpp.i

CMakeFiles/cpp-patterns_test.dir/test/messages/argument_holder/test_argument_ArgumentHolder.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/cpp-patterns_test.dir/test/messages/argument_holder/test_argument_ArgumentHolder.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/bas/Projects/cpp_patterns/test/messages/argument_holder/test_argument_ArgumentHolder.cpp -o CMakeFiles/cpp-patterns_test.dir/test/messages/argument_holder/test_argument_ArgumentHolder.cpp.s

CMakeFiles/cpp-patterns_test.dir/test/messages/argument_holder/test_utils/TestArgumentHolder.cpp.o: CMakeFiles/cpp-patterns_test.dir/flags.make
CMakeFiles/cpp-patterns_test.dir/test/messages/argument_holder/test_utils/TestArgumentHolder.cpp.o: ../test/messages/argument_holder/test_utils/TestArgumentHolder.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/bas/Projects/cpp_patterns/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/cpp-patterns_test.dir/test/messages/argument_holder/test_utils/TestArgumentHolder.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/cpp-patterns_test.dir/test/messages/argument_holder/test_utils/TestArgumentHolder.cpp.o -c /home/bas/Projects/cpp_patterns/test/messages/argument_holder/test_utils/TestArgumentHolder.cpp

CMakeFiles/cpp-patterns_test.dir/test/messages/argument_holder/test_utils/TestArgumentHolder.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/cpp-patterns_test.dir/test/messages/argument_holder/test_utils/TestArgumentHolder.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/bas/Projects/cpp_patterns/test/messages/argument_holder/test_utils/TestArgumentHolder.cpp > CMakeFiles/cpp-patterns_test.dir/test/messages/argument_holder/test_utils/TestArgumentHolder.cpp.i

CMakeFiles/cpp-patterns_test.dir/test/messages/argument_holder/test_utils/TestArgumentHolder.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/cpp-patterns_test.dir/test/messages/argument_holder/test_utils/TestArgumentHolder.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/bas/Projects/cpp_patterns/test/messages/argument_holder/test_utils/TestArgumentHolder.cpp -o CMakeFiles/cpp-patterns_test.dir/test/messages/argument_holder/test_utils/TestArgumentHolder.cpp.s

CMakeFiles/cpp-patterns_test.dir/test/messages/test_state_Event.cpp.o: CMakeFiles/cpp-patterns_test.dir/flags.make
CMakeFiles/cpp-patterns_test.dir/test/messages/test_state_Event.cpp.o: ../test/messages/test_state_Event.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/bas/Projects/cpp_patterns/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/cpp-patterns_test.dir/test/messages/test_state_Event.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/cpp-patterns_test.dir/test/messages/test_state_Event.cpp.o -c /home/bas/Projects/cpp_patterns/test/messages/test_state_Event.cpp

CMakeFiles/cpp-patterns_test.dir/test/messages/test_state_Event.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/cpp-patterns_test.dir/test/messages/test_state_Event.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/bas/Projects/cpp_patterns/test/messages/test_state_Event.cpp > CMakeFiles/cpp-patterns_test.dir/test/messages/test_state_Event.cpp.i

CMakeFiles/cpp-patterns_test.dir/test/messages/test_state_Event.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/cpp-patterns_test.dir/test/messages/test_state_Event.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/bas/Projects/cpp_patterns/test/messages/test_state_Event.cpp -o CMakeFiles/cpp-patterns_test.dir/test/messages/test_state_Event.cpp.s

CMakeFiles/cpp-patterns_test.dir/test/messages/test_utils/TestEvent.cpp.o: CMakeFiles/cpp-patterns_test.dir/flags.make
CMakeFiles/cpp-patterns_test.dir/test/messages/test_utils/TestEvent.cpp.o: ../test/messages/test_utils/TestEvent.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/bas/Projects/cpp_patterns/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/cpp-patterns_test.dir/test/messages/test_utils/TestEvent.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/cpp-patterns_test.dir/test/messages/test_utils/TestEvent.cpp.o -c /home/bas/Projects/cpp_patterns/test/messages/test_utils/TestEvent.cpp

CMakeFiles/cpp-patterns_test.dir/test/messages/test_utils/TestEvent.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/cpp-patterns_test.dir/test/messages/test_utils/TestEvent.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/bas/Projects/cpp_patterns/test/messages/test_utils/TestEvent.cpp > CMakeFiles/cpp-patterns_test.dir/test/messages/test_utils/TestEvent.cpp.i

CMakeFiles/cpp-patterns_test.dir/test/messages/test_utils/TestEvent.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/cpp-patterns_test.dir/test/messages/test_utils/TestEvent.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/bas/Projects/cpp_patterns/test/messages/test_utils/TestEvent.cpp -o CMakeFiles/cpp-patterns_test.dir/test/messages/test_utils/TestEvent.cpp.s

CMakeFiles/cpp-patterns_test.dir/test/observer/test_observer_Notifier.cpp.o: CMakeFiles/cpp-patterns_test.dir/flags.make
CMakeFiles/cpp-patterns_test.dir/test/observer/test_observer_Notifier.cpp.o: ../test/observer/test_observer_Notifier.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/bas/Projects/cpp_patterns/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object CMakeFiles/cpp-patterns_test.dir/test/observer/test_observer_Notifier.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/cpp-patterns_test.dir/test/observer/test_observer_Notifier.cpp.o -c /home/bas/Projects/cpp_patterns/test/observer/test_observer_Notifier.cpp

CMakeFiles/cpp-patterns_test.dir/test/observer/test_observer_Notifier.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/cpp-patterns_test.dir/test/observer/test_observer_Notifier.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/bas/Projects/cpp_patterns/test/observer/test_observer_Notifier.cpp > CMakeFiles/cpp-patterns_test.dir/test/observer/test_observer_Notifier.cpp.i

CMakeFiles/cpp-patterns_test.dir/test/observer/test_observer_Notifier.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/cpp-patterns_test.dir/test/observer/test_observer_Notifier.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/bas/Projects/cpp_patterns/test/observer/test_observer_Notifier.cpp -o CMakeFiles/cpp-patterns_test.dir/test/observer/test_observer_Notifier.cpp.s

CMakeFiles/cpp-patterns_test.dir/test/observer/test_utils/TestNotifier.cpp.o: CMakeFiles/cpp-patterns_test.dir/flags.make
CMakeFiles/cpp-patterns_test.dir/test/observer/test_utils/TestNotifier.cpp.o: ../test/observer/test_utils/TestNotifier.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/bas/Projects/cpp_patterns/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building CXX object CMakeFiles/cpp-patterns_test.dir/test/observer/test_utils/TestNotifier.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/cpp-patterns_test.dir/test/observer/test_utils/TestNotifier.cpp.o -c /home/bas/Projects/cpp_patterns/test/observer/test_utils/TestNotifier.cpp

CMakeFiles/cpp-patterns_test.dir/test/observer/test_utils/TestNotifier.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/cpp-patterns_test.dir/test/observer/test_utils/TestNotifier.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/bas/Projects/cpp_patterns/test/observer/test_utils/TestNotifier.cpp > CMakeFiles/cpp-patterns_test.dir/test/observer/test_utils/TestNotifier.cpp.i

CMakeFiles/cpp-patterns_test.dir/test/observer/test_utils/TestNotifier.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/cpp-patterns_test.dir/test/observer/test_utils/TestNotifier.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/bas/Projects/cpp_patterns/test/observer/test_utils/TestNotifier.cpp -o CMakeFiles/cpp-patterns_test.dir/test/observer/test_utils/TestNotifier.cpp.s

CMakeFiles/cpp-patterns_test.dir/test/observer/test_utils/TestObserver.cpp.o: CMakeFiles/cpp-patterns_test.dir/flags.make
CMakeFiles/cpp-patterns_test.dir/test/observer/test_utils/TestObserver.cpp.o: ../test/observer/test_utils/TestObserver.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/bas/Projects/cpp_patterns/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Building CXX object CMakeFiles/cpp-patterns_test.dir/test/observer/test_utils/TestObserver.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/cpp-patterns_test.dir/test/observer/test_utils/TestObserver.cpp.o -c /home/bas/Projects/cpp_patterns/test/observer/test_utils/TestObserver.cpp

CMakeFiles/cpp-patterns_test.dir/test/observer/test_utils/TestObserver.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/cpp-patterns_test.dir/test/observer/test_utils/TestObserver.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/bas/Projects/cpp_patterns/test/observer/test_utils/TestObserver.cpp > CMakeFiles/cpp-patterns_test.dir/test/observer/test_utils/TestObserver.cpp.i

CMakeFiles/cpp-patterns_test.dir/test/observer/test_utils/TestObserver.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/cpp-patterns_test.dir/test/observer/test_utils/TestObserver.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/bas/Projects/cpp_patterns/test/observer/test_utils/TestObserver.cpp -o CMakeFiles/cpp-patterns_test.dir/test/observer/test_utils/TestObserver.cpp.s

CMakeFiles/cpp-patterns_test.dir/test/singleton/test_singleton_Singleton.cpp.o: CMakeFiles/cpp-patterns_test.dir/flags.make
CMakeFiles/cpp-patterns_test.dir/test/singleton/test_singleton_Singleton.cpp.o: ../test/singleton/test_singleton_Singleton.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/bas/Projects/cpp_patterns/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_9) "Building CXX object CMakeFiles/cpp-patterns_test.dir/test/singleton/test_singleton_Singleton.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/cpp-patterns_test.dir/test/singleton/test_singleton_Singleton.cpp.o -c /home/bas/Projects/cpp_patterns/test/singleton/test_singleton_Singleton.cpp

CMakeFiles/cpp-patterns_test.dir/test/singleton/test_singleton_Singleton.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/cpp-patterns_test.dir/test/singleton/test_singleton_Singleton.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/bas/Projects/cpp_patterns/test/singleton/test_singleton_Singleton.cpp > CMakeFiles/cpp-patterns_test.dir/test/singleton/test_singleton_Singleton.cpp.i

CMakeFiles/cpp-patterns_test.dir/test/singleton/test_singleton_Singleton.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/cpp-patterns_test.dir/test/singleton/test_singleton_Singleton.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/bas/Projects/cpp_patterns/test/singleton/test_singleton_Singleton.cpp -o CMakeFiles/cpp-patterns_test.dir/test/singleton/test_singleton_Singleton.cpp.s

CMakeFiles/cpp-patterns_test.dir/test/singleton/test_utils/TestSingleton.cpp.o: CMakeFiles/cpp-patterns_test.dir/flags.make
CMakeFiles/cpp-patterns_test.dir/test/singleton/test_utils/TestSingleton.cpp.o: ../test/singleton/test_utils/TestSingleton.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/bas/Projects/cpp_patterns/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_10) "Building CXX object CMakeFiles/cpp-patterns_test.dir/test/singleton/test_utils/TestSingleton.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/cpp-patterns_test.dir/test/singleton/test_utils/TestSingleton.cpp.o -c /home/bas/Projects/cpp_patterns/test/singleton/test_utils/TestSingleton.cpp

CMakeFiles/cpp-patterns_test.dir/test/singleton/test_utils/TestSingleton.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/cpp-patterns_test.dir/test/singleton/test_utils/TestSingleton.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/bas/Projects/cpp_patterns/test/singleton/test_utils/TestSingleton.cpp > CMakeFiles/cpp-patterns_test.dir/test/singleton/test_utils/TestSingleton.cpp.i

CMakeFiles/cpp-patterns_test.dir/test/singleton/test_utils/TestSingleton.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/cpp-patterns_test.dir/test/singleton/test_utils/TestSingleton.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/bas/Projects/cpp_patterns/test/singleton/test_utils/TestSingleton.cpp -o CMakeFiles/cpp-patterns_test.dir/test/singleton/test_utils/TestSingleton.cpp.s

CMakeFiles/cpp-patterns_test.dir/test/state/test_state_Context.cpp.o: CMakeFiles/cpp-patterns_test.dir/flags.make
CMakeFiles/cpp-patterns_test.dir/test/state/test_state_Context.cpp.o: ../test/state/test_state_Context.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/bas/Projects/cpp_patterns/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_11) "Building CXX object CMakeFiles/cpp-patterns_test.dir/test/state/test_state_Context.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/cpp-patterns_test.dir/test/state/test_state_Context.cpp.o -c /home/bas/Projects/cpp_patterns/test/state/test_state_Context.cpp

CMakeFiles/cpp-patterns_test.dir/test/state/test_state_Context.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/cpp-patterns_test.dir/test/state/test_state_Context.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/bas/Projects/cpp_patterns/test/state/test_state_Context.cpp > CMakeFiles/cpp-patterns_test.dir/test/state/test_state_Context.cpp.i

CMakeFiles/cpp-patterns_test.dir/test/state/test_state_Context.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/cpp-patterns_test.dir/test/state/test_state_Context.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/bas/Projects/cpp_patterns/test/state/test_state_Context.cpp -o CMakeFiles/cpp-patterns_test.dir/test/state/test_state_Context.cpp.s

CMakeFiles/cpp-patterns_test.dir/test/state/test_state_ContextState.cpp.o: CMakeFiles/cpp-patterns_test.dir/flags.make
CMakeFiles/cpp-patterns_test.dir/test/state/test_state_ContextState.cpp.o: ../test/state/test_state_ContextState.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/bas/Projects/cpp_patterns/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_12) "Building CXX object CMakeFiles/cpp-patterns_test.dir/test/state/test_state_ContextState.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/cpp-patterns_test.dir/test/state/test_state_ContextState.cpp.o -c /home/bas/Projects/cpp_patterns/test/state/test_state_ContextState.cpp

CMakeFiles/cpp-patterns_test.dir/test/state/test_state_ContextState.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/cpp-patterns_test.dir/test/state/test_state_ContextState.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/bas/Projects/cpp_patterns/test/state/test_state_ContextState.cpp > CMakeFiles/cpp-patterns_test.dir/test/state/test_state_ContextState.cpp.i

CMakeFiles/cpp-patterns_test.dir/test/state/test_state_ContextState.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/cpp-patterns_test.dir/test/state/test_state_ContextState.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/bas/Projects/cpp_patterns/test/state/test_state_ContextState.cpp -o CMakeFiles/cpp-patterns_test.dir/test/state/test_state_ContextState.cpp.s

CMakeFiles/cpp-patterns_test.dir/test/state/test_utils/TestContext.cpp.o: CMakeFiles/cpp-patterns_test.dir/flags.make
CMakeFiles/cpp-patterns_test.dir/test/state/test_utils/TestContext.cpp.o: ../test/state/test_utils/TestContext.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/bas/Projects/cpp_patterns/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_13) "Building CXX object CMakeFiles/cpp-patterns_test.dir/test/state/test_utils/TestContext.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/cpp-patterns_test.dir/test/state/test_utils/TestContext.cpp.o -c /home/bas/Projects/cpp_patterns/test/state/test_utils/TestContext.cpp

CMakeFiles/cpp-patterns_test.dir/test/state/test_utils/TestContext.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/cpp-patterns_test.dir/test/state/test_utils/TestContext.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/bas/Projects/cpp_patterns/test/state/test_utils/TestContext.cpp > CMakeFiles/cpp-patterns_test.dir/test/state/test_utils/TestContext.cpp.i

CMakeFiles/cpp-patterns_test.dir/test/state/test_utils/TestContext.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/cpp-patterns_test.dir/test/state/test_utils/TestContext.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/bas/Projects/cpp_patterns/test/state/test_utils/TestContext.cpp -o CMakeFiles/cpp-patterns_test.dir/test/state/test_utils/TestContext.cpp.s

CMakeFiles/cpp-patterns_test.dir/test/state/test_utils/test_state/FirstTestState.cpp.o: CMakeFiles/cpp-patterns_test.dir/flags.make
CMakeFiles/cpp-patterns_test.dir/test/state/test_utils/test_state/FirstTestState.cpp.o: ../test/state/test_utils/test_state/FirstTestState.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/bas/Projects/cpp_patterns/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_14) "Building CXX object CMakeFiles/cpp-patterns_test.dir/test/state/test_utils/test_state/FirstTestState.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/cpp-patterns_test.dir/test/state/test_utils/test_state/FirstTestState.cpp.o -c /home/bas/Projects/cpp_patterns/test/state/test_utils/test_state/FirstTestState.cpp

CMakeFiles/cpp-patterns_test.dir/test/state/test_utils/test_state/FirstTestState.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/cpp-patterns_test.dir/test/state/test_utils/test_state/FirstTestState.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/bas/Projects/cpp_patterns/test/state/test_utils/test_state/FirstTestState.cpp > CMakeFiles/cpp-patterns_test.dir/test/state/test_utils/test_state/FirstTestState.cpp.i

CMakeFiles/cpp-patterns_test.dir/test/state/test_utils/test_state/FirstTestState.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/cpp-patterns_test.dir/test/state/test_utils/test_state/FirstTestState.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/bas/Projects/cpp_patterns/test/state/test_utils/test_state/FirstTestState.cpp -o CMakeFiles/cpp-patterns_test.dir/test/state/test_utils/test_state/FirstTestState.cpp.s

CMakeFiles/cpp-patterns_test.dir/test/state/test_utils/test_state/SecondTestState.cpp.o: CMakeFiles/cpp-patterns_test.dir/flags.make
CMakeFiles/cpp-patterns_test.dir/test/state/test_utils/test_state/SecondTestState.cpp.o: ../test/state/test_utils/test_state/SecondTestState.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/bas/Projects/cpp_patterns/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_15) "Building CXX object CMakeFiles/cpp-patterns_test.dir/test/state/test_utils/test_state/SecondTestState.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/cpp-patterns_test.dir/test/state/test_utils/test_state/SecondTestState.cpp.o -c /home/bas/Projects/cpp_patterns/test/state/test_utils/test_state/SecondTestState.cpp

CMakeFiles/cpp-patterns_test.dir/test/state/test_utils/test_state/SecondTestState.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/cpp-patterns_test.dir/test/state/test_utils/test_state/SecondTestState.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/bas/Projects/cpp_patterns/test/state/test_utils/test_state/SecondTestState.cpp > CMakeFiles/cpp-patterns_test.dir/test/state/test_utils/test_state/SecondTestState.cpp.i

CMakeFiles/cpp-patterns_test.dir/test/state/test_utils/test_state/SecondTestState.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/cpp-patterns_test.dir/test/state/test_utils/test_state/SecondTestState.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/bas/Projects/cpp_patterns/test/state/test_utils/test_state/SecondTestState.cpp -o CMakeFiles/cpp-patterns_test.dir/test/state/test_utils/test_state/SecondTestState.cpp.s

CMakeFiles/cpp-patterns_test.dir/test/state/test_utils/test_state/TestState.cpp.o: CMakeFiles/cpp-patterns_test.dir/flags.make
CMakeFiles/cpp-patterns_test.dir/test/state/test_utils/test_state/TestState.cpp.o: ../test/state/test_utils/test_state/TestState.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/bas/Projects/cpp_patterns/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_16) "Building CXX object CMakeFiles/cpp-patterns_test.dir/test/state/test_utils/test_state/TestState.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/cpp-patterns_test.dir/test/state/test_utils/test_state/TestState.cpp.o -c /home/bas/Projects/cpp_patterns/test/state/test_utils/test_state/TestState.cpp

CMakeFiles/cpp-patterns_test.dir/test/state/test_utils/test_state/TestState.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/cpp-patterns_test.dir/test/state/test_utils/test_state/TestState.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/bas/Projects/cpp_patterns/test/state/test_utils/test_state/TestState.cpp > CMakeFiles/cpp-patterns_test.dir/test/state/test_utils/test_state/TestState.cpp.i

CMakeFiles/cpp-patterns_test.dir/test/state/test_utils/test_state/TestState.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/cpp-patterns_test.dir/test/state/test_utils/test_state/TestState.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/bas/Projects/cpp_patterns/test/state/test_utils/test_state/TestState.cpp -o CMakeFiles/cpp-patterns_test.dir/test/state/test_utils/test_state/TestState.cpp.s

# Object files for target cpp-patterns_test
cpp__patterns_test_OBJECTS = \
"CMakeFiles/cpp-patterns_test.dir/test/main.cpp.o" \
"CMakeFiles/cpp-patterns_test.dir/test/messages/argument_holder/test_argument_ArgumentHolder.cpp.o" \
"CMakeFiles/cpp-patterns_test.dir/test/messages/argument_holder/test_utils/TestArgumentHolder.cpp.o" \
"CMakeFiles/cpp-patterns_test.dir/test/messages/test_state_Event.cpp.o" \
"CMakeFiles/cpp-patterns_test.dir/test/messages/test_utils/TestEvent.cpp.o" \
"CMakeFiles/cpp-patterns_test.dir/test/observer/test_observer_Notifier.cpp.o" \
"CMakeFiles/cpp-patterns_test.dir/test/observer/test_utils/TestNotifier.cpp.o" \
"CMakeFiles/cpp-patterns_test.dir/test/observer/test_utils/TestObserver.cpp.o" \
"CMakeFiles/cpp-patterns_test.dir/test/singleton/test_singleton_Singleton.cpp.o" \
"CMakeFiles/cpp-patterns_test.dir/test/singleton/test_utils/TestSingleton.cpp.o" \
"CMakeFiles/cpp-patterns_test.dir/test/state/test_state_Context.cpp.o" \
"CMakeFiles/cpp-patterns_test.dir/test/state/test_state_ContextState.cpp.o" \
"CMakeFiles/cpp-patterns_test.dir/test/state/test_utils/TestContext.cpp.o" \
"CMakeFiles/cpp-patterns_test.dir/test/state/test_utils/test_state/FirstTestState.cpp.o" \
"CMakeFiles/cpp-patterns_test.dir/test/state/test_utils/test_state/SecondTestState.cpp.o" \
"CMakeFiles/cpp-patterns_test.dir/test/state/test_utils/test_state/TestState.cpp.o"

# External object files for target cpp-patterns_test
cpp__patterns_test_EXTERNAL_OBJECTS =

cpp-patterns_test: CMakeFiles/cpp-patterns_test.dir/test/main.cpp.o
cpp-patterns_test: CMakeFiles/cpp-patterns_test.dir/test/messages/argument_holder/test_argument_ArgumentHolder.cpp.o
cpp-patterns_test: CMakeFiles/cpp-patterns_test.dir/test/messages/argument_holder/test_utils/TestArgumentHolder.cpp.o
cpp-patterns_test: CMakeFiles/cpp-patterns_test.dir/test/messages/test_state_Event.cpp.o
cpp-patterns_test: CMakeFiles/cpp-patterns_test.dir/test/messages/test_utils/TestEvent.cpp.o
cpp-patterns_test: CMakeFiles/cpp-patterns_test.dir/test/observer/test_observer_Notifier.cpp.o
cpp-patterns_test: CMakeFiles/cpp-patterns_test.dir/test/observer/test_utils/TestNotifier.cpp.o
cpp-patterns_test: CMakeFiles/cpp-patterns_test.dir/test/observer/test_utils/TestObserver.cpp.o
cpp-patterns_test: CMakeFiles/cpp-patterns_test.dir/test/singleton/test_singleton_Singleton.cpp.o
cpp-patterns_test: CMakeFiles/cpp-patterns_test.dir/test/singleton/test_utils/TestSingleton.cpp.o
cpp-patterns_test: CMakeFiles/cpp-patterns_test.dir/test/state/test_state_Context.cpp.o
cpp-patterns_test: CMakeFiles/cpp-patterns_test.dir/test/state/test_state_ContextState.cpp.o
cpp-patterns_test: CMakeFiles/cpp-patterns_test.dir/test/state/test_utils/TestContext.cpp.o
cpp-patterns_test: CMakeFiles/cpp-patterns_test.dir/test/state/test_utils/test_state/FirstTestState.cpp.o
cpp-patterns_test: CMakeFiles/cpp-patterns_test.dir/test/state/test_utils/test_state/SecondTestState.cpp.o
cpp-patterns_test: CMakeFiles/cpp-patterns_test.dir/test/state/test_utils/test_state/TestState.cpp.o
cpp-patterns_test: CMakeFiles/cpp-patterns_test.dir/build.make
cpp-patterns_test: /usr/local/lib/libboost_unit_test_framework.so
cpp-patterns_test: /usr/local/lib/libboost_system.so
cpp-patterns_test: /usr/local/lib/libboost_unit_test_framework.so
cpp-patterns_test: CMakeFiles/cpp-patterns_test.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/bas/Projects/cpp_patterns/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_17) "Linking CXX executable cpp-patterns_test"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/cpp-patterns_test.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/cpp-patterns_test.dir/build: cpp-patterns_test

.PHONY : CMakeFiles/cpp-patterns_test.dir/build

CMakeFiles/cpp-patterns_test.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/cpp-patterns_test.dir/cmake_clean.cmake
.PHONY : CMakeFiles/cpp-patterns_test.dir/clean

CMakeFiles/cpp-patterns_test.dir/depend:
	cd /home/bas/Projects/cpp_patterns/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/bas/Projects/cpp_patterns /home/bas/Projects/cpp_patterns /home/bas/Projects/cpp_patterns/cmake-build-debug /home/bas/Projects/cpp_patterns/cmake-build-debug /home/bas/Projects/cpp_patterns/cmake-build-debug/CMakeFiles/cpp-patterns_test.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/cpp-patterns_test.dir/depend

