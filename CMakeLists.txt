cmake_minimum_required(VERSION 3.13)

# initialize the SDK based on PICO_SDK_PATH
# note: this must happen before project()
include(pico_sdk_import.cmake)

project(test_project)

# initialize the Raspberry Pi Pico SDK
pico_sdk_init()

if (BUILD_BLINK_PRJ)
    add_subdirectory(src/Blink_default)
endif()

if (BUILD_BLINK_PIO_PRJ)
    add_subdirectory(src/Blink_with_PIO)
endif()

if (BUILD_GPIO_TEST_PRJ)
    add_subdirectory(src/Gpio_test)
endif()

if (BUILD_GPIO_COMBINED_PRJ)
    add_subdirectory(src/Gpio_combined)
endif()

if (BUILD_SERVO_PRJ)
    add_subdirectory(src/Servo)
endif()

if (BUILD_USB_TEST)
    add_subdirectory(src/Usb_transfer_test)
endif()