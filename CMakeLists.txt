cmake_minimum_required(VERSION 3.14)
project(TCP_IP_Server_Client)

set(CMAKE_CXX_STANDARD 14)

add_executable(TCP_IP_Server_Client main.cpp Comms.h Server.cpp Server.h Client.cpp Client.h Comms.cpp)
target_link_libraries(TCP_IP_Server_Client ws2_32)