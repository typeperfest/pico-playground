## Raspberry PI Pico
This reposritore contains some exercises to train embedded programing 
### Usage
1. Clone this repository
2. Download pico sdk from https://github.com/raspberrypi/pico-sdk and put it in ~/.pico-sdk/
3. ```export PICO_SDK_PATH=/users/$(whoami)/.pico-sdk/pico-sdk```
4. ```cmake . -Bbuild -DBUILD_BLINK_PRJ=1``` to work only with BLINK_PRJ project
5. ```cmake --build build``` to build blink project
6. Put uf2 to file on pico platform
### Options to build different projects
See different options below to work with different projects
- BUILD_BLINK_PRJ (Official example)
- BUILD_BLINK_PIO_PRJ (Official example)
- BUILD_GPIO_TEST_PRJ
- BUILD_GPIO_COMBINED_PRJ
- BUILD_SERVO_PRJ
- BUILD_USB_TEST
