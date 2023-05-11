cmake_minimum_required(VERSION 3.13)

project(Blink_with_PIO)

add_executable(blink_pio)

pico_generate_pio_header(blink_pio ${CMAKE_CURRENT_SOURCE_DIR}/main.pio)

target_sources(blink_pio PRIVATE main.c)

# Add pico_stdlib library which aggregates commonly used features
target_link_libraries(blink_pio PRIVATE
        pico_stdlib
        hardware_pio
        )

pico_add_extra_outputs(blink_pio)