cmake_minimum_required(VERSION 3.8)
project(SemanticAnalyzer)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES
        Project3/CodeGenerator.cpp
        Project3/CodeGenerator.h
        Project3/LexicalAnalyzer.cpp
        Project3/LexicalAnalyzer.h
        Project3/makefile
        Project3/Object.cpp
        Project3/Object.h
        Project3/Project3.cpp
        Project3/SetLimits.cpp
        Project3/SetLimits.h
        Project3/SyntacticalAnalyzer.cpp
        Project3/SyntacticalAnalyzer.h
)

add_executable(SemanticAnalyzer ${SOURCE_FILES})