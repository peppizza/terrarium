#ifndef TEMPSENSOR_CONSTANTS_H
#define TEMPSENSOR_CONSTANTS_H

#include "hardware/i2c.h"

#define SENSOR_SDA_PIN 2
#define SENSOR_SCL_PIN 3
#define SENSOR_INSTANCE i2c1

#define SENSOR_ADDR 0x44

// Flags for one shot measurement
#define CLK_STRETCH_EN_MSB 0x2C
#define CLK_STRETCH_DIS_MSB 0x24

#define CLK_STRETCH_EN_HIGH_REPEAT_LSB 0x06
#define CLK_STRETCH_EN_MID_REPEAT_LSB 0x0D
#define CLK_STRETCH_EN_LOW_REPEAT_LSB 0x10

#define CLK_STRETCH_DIS_HIGH_REPEAT_LSB 0x00
#define CLK_STRETCH_DIS_MID_REPEAT_LSB 0x0B
#define CLK_STRETCH_DIS_LOW_REPEAT_LSB 0x16

// Flags for periodic acquisition mode
#define MPS_0_5_MSB 0x20
#define MPS_1_MSB 0x21
#define MPS_2_MSB 0x22
#define MPS_4_MSB 0x23
#define MPS_10_MSB 0x27

#define MPS_0_5_HIGH_REPEAT_LSB 0x32
#define MPS_0_5_MID_REPEAT_LSB 0x24
#define MPS_0_5_LOW_REPEAT_LSB 0x2F

#define MPS_1_HIGH_REPEAT_LSB 0x30
#define MPS_1_MID_REPEAT_LSB 0x26
#define MPS_1_LOW_REPEAT_LSB 0x2D

#define MPS_2_HIGH_REPEAT_LSB 0x36
#define MPS_2_MID_REPEAT_LSB 0x20
#define MPS_2_LOW_REPEAT_LSB 0x2B

#define MPS_4_HIGH_REPEAT_LSB 0x34
#define MPS_4_MID_REPEAT_LSB 0x22
#define MPS_4_LOW_REPEAT_LSB 0x29

#define MPS_10_HIGH_REPEAT_LSB 0x37
#define MPS_10_MID_REPEAT_LSB 0x21
#define MPS_10_LOW_REPEAT_LSB 0x2A

// Flags for fetching data
#define FETCH_DATA_MSB 0xE0
#define FETCH_DATA_LSB 0x00

// Flags for activating accelerated response time
#define ART_4HZ_MSB 0x2B
#define ART_4HZ_LSB 0x32

// Flags for stopping periodic acquisition mode
#define BREAK_MSB 0x30
#define BREAK_LSB 0x93

// Flags for performing soft reset
#define SOFT_RESET_MSB 0x30
#define SOFT_RESET_LSB 0xA2

// Flags for enabling/disabling the heater
#define HEATER_MSB 0x30
#define HEATER_ENABLE_LSB 0x6D
#define HEATER_DISABLE_LSB 0x66

// Flags for reading out status register
#define STATUS_REGISTER_READOUT_MSB 0xF3
#define STATUS_REGISTER_READOUT_LSB 0x2D

// Flags for clearing the status register
#define STATUS_REGISTER_CLEAR_MSB 0x30
#define STATUS_REGISTER_CLEAR_LSB 0x41

#endif