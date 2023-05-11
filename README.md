## Raspberry PI Pico
This reposritore contains some exercises to train embedded programing 
### Usage
1. Clone this repository
2. Install dependencies ```sudo apt install cmake gcc-arm-none-eabi libnewlib-arm-none-eabi libstdc++-arm-none-eabi-newlib```
3. Download pico sdk from https://github.com/raspberrypi/pico-sdk and put it in ~/.pico-sdk/
4. ```export PICO_SDK_PATH=/users/$(whoami)/.pico-sdk/pico-sdk```
5. ```cmake . -Bbuild -DBUILD_BLINK_PRJ=1``` to work only with BLINK_PRJ project
6. ```cmake --build build``` to build blink project
7. Put uf2 to file on pico platform
### Options to build different projects
See different options below to work with different projects
- BUILD_BLINK_PRJ (Official example)
- BUILD_BLINK_PIO_PRJ (Official example)
- BUILD_GPIO_TEST_PRJ
- BUILD_GPIO_COMBINED_PRJ
- BUILD_SERVO_PRJ (3rd party project)
- BUILD_USB_TEST (Official example)
- BUILD_UART_HELLO_PRJ (Official example)