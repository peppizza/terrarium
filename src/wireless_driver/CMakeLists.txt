add_library(wireless_driver "")

target_sources(
  wireless_driver
  PRIVATE ${CMAKE_CURRENT_LIST_DIR}/lwipopts.h
          ${CMAKE_CURRENT_LIST_DIR}/wireless_driver.c
  PUBLIC ${CMAKE_CURRENT_LIST_DIR}/wireless_driver.h)
target_include_directories(wireless_driver PUBLIC ${CMAKE_CURRENT_LIST_DIR})
