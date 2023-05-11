cmake_minimum_required(VERSION 3.13)

project(servo_test)

add_executable(servo_ex main.c)

add_subdirectory(pico-servo)

target_include_directories(servo_ex PRIVATE ../../3rdparty/pico-servo/include)
target_link_directories(servo_ex PRIVATE ../../3rdparty/pico-servo/build)
target_link_libraries(servo_ex pico_stdlib hardware_pwm pico-servo fixmath)

pico_add_extra_outputs(servo_ex)
