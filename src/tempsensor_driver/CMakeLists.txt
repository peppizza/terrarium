add_library(tempsensor_driver "")

target_sources(tempsensor_driver
    PRIVATE
        ${CMAKE_CURRENT_LIST_DIR}/tempsensor_driver.c
        ${CMAKE_CURRENT_LIST_DIR}/tempsensor_constants.h
    PUBLIC
        ${CMAKE_CURRENT_LIST_DIR}/tempsensor_driver.h
    )
target_include_directories(tempsensor_driver
    PUBLIC
        ${CMAKE_CURRENT_LIST_DIR}
    )