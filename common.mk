CXX = g++

OFLAGS = -O2
STD = -std=c++17
WFLAGS = -Wall
CXXFLAGS = $(OFLAGS) -pthread $(STD) $(WFLAGS)

TARGET_LIB = elevator-lib.a
TARGET = Projekt

SRC_DIR = src/
BUILD_DIR = build/
