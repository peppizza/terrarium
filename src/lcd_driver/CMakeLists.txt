add_library(lcd_driver "")

target_link_libraries(lcd_driver
    PRIVATE
        hardware_i2c
    )

target_sources(lcd_driver
    PRIVATE
        ${CMAKE_CURRENT_LIST_DIR}/lcd_driver.c
        ${CMAKE_CURRENT_LIST_DIR}/lcd_constants.h
    PUBLIC
        ${CMAKE_CURRENT_LIST_DIR}/lcd_driver.h
    )
target_include_directories(lcd_driver
    PUBLIC
        ${CMAKE_CURRENT_LIST_DIR}
    )
