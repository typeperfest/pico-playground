cmake_minimum_required(VERSION 3.13)

project(Blink_default)

add_executable(blink_def main.c)

# Add pico_stdlib library which aggregates commonly used features
target_link_libraries(blink_def pico_stdlib)

pico_add_extra_outputs(blink_def)