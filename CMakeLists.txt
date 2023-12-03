cmake_minimum_required(VERSION 3.23)
project(cwiczenia1)

set(CMAKE_CXX_STANDARD 17)

add_executable(cwiczenia1 main.cpp Employee.cpp Employee.h Developer.cpp Developer.h TeamLeader.cpp TeamLeader.h Bufor.cpp Bufor.h MaxBufor.cpp MaxBufor.h MeanBufor.cpp MeanBufor.h)
