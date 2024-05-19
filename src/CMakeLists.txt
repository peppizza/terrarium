add_executable(terrarium main.c)

add_subdirectory(lcd_driver)
add_subdirectory(tempsensor_driver)
add_subdirectory(wireless_driver)

target_link_libraries(
  terrarium PRIVATE lcd_driver tempsensor_driver wireless_driver pico_stdlib
                    hardware_i2c pico_cyw43_arch_lwip_threadsafe_background)

# Add executable. Default name is the project name, version 0.1

pico_set_program_name(terrarium "terrarium")
pico_set_program_version(terrarium "0.1")

# Modify the below lines to enable/disable output over UART/USB
pico_enable_stdio_uart(terrarium 0)
pico_enable_stdio_usb(terrarium 1)

pico_add_extra_outputs(terrarium)
