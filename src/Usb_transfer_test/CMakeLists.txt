add_executable(hello_serial
        main.c
        )

# Pull in our pico_stdlib which aggregates commonly used features
target_link_libraries(hello_serial pico_stdlib)

# create map/bin/hex/uf2 file etc.
pico_add_extra_outputs(hello_serial)