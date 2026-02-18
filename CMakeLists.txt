cmake_minimum_required(VERSION 3.10.0)
project(music VERSION 0.1.0 LANGUAGES C CXX)

add_library(music SHARED AbstractMusic.hpp AudioFile.hpp Track.hpp Track.cpp)

