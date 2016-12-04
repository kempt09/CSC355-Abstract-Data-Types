cmake_minimum_required(VERSION 3.6)
project(CSC335)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp linked/linkedlist/linkedList.cpp linked/linkedlist/linkedList.h dynamic/queue/queue.cpp dynamic/queue/queue.h dynamic/stack/Stack.cpp dynamic/stack/Stack.h dynamic/list/List.cpp dynamic/list/List.h linked/linkedstack/LinkedStack.cpp linked/linkedstack/LinkedStack.h linked/linkedqueue/LinkedQueue.cpp linked/linkedqueue/LinkedQueue.h templates/list/TemplateList.h templates/queue/TemplateQueue.h templates/stack/TemplateStack.h)
add_executable(CSC335 ${SOURCE_FILES})