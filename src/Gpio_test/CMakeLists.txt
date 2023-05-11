cmake_minimum_required(VERSION 3.13)

project(Gpio_test)

add_executable(gpio_test main.c)

# Add pico_stdlib library which aggregates commonly used features
target_link_libraries(gpio_test pico_stdlib)

pico_add_extra_outputs(gpio_test)