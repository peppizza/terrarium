include(${CMAKE_CURRENT_LIST_DIR}/../pico_sdk_import.cmake)

pico_sdk_init()

add_executable(sources main.c)

add_subdirectory(lcd_driver)
add_subdirectory(tempsensor_driver)
add_subdirectory(wireless_driver)

target_link_libraries(sources
    PRIVATE
        lcd_driver
        tempsensor_driver
        wireless_driver
        pico_stdlib
        hardware_i2c
        pico_cyw43_arch_lwip_threadsafe_background
    )

# Add executable. Default name is the project name, version 0.1

pico_set_program_name(sources "terrarium")
pico_set_program_version(sources "0.1")

# Modify the below lines to enable/disable output over UART/USB
pico_enable_stdio_uart(sources 0)
pico_enable_stdio_usb(sources 1)

pico_add_extra_outputs(sources)