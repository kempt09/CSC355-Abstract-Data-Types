cmake_minimum_required(VERSION 3.6)
project(CSC335)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp linkedlist/linkedList.cpp linkedlist/linkedList.h queue/queue.cpp queue/queue.h stack/Stack.cpp stack/Stack.h list/List.cpp list/List.h linkedstack/LinkedStack.cpp linkedstack/LinkedStack.h linkedqueue/LinkedQueue.cpp linkedqueue/LinkedQueue.h templates/list/TemplateList.h templates/queue/TemplateQueue.h templates/stack/TemplateStack.h)
add_executable(CSC335 ${SOURCE_FILES})