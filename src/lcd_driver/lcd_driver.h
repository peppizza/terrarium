#ifndef LCD_DRIVER_H
#define LCD_DRIVER_H

#include "hardware/i2c.h"
#include "lcd_constants.h"

#define LCD_CHARACTER 1
#define LCD_COMMAND 0

#define MAX_LINES 2
#define MAX_CHARS 16

void i2c_write_byte(uint8_t val);

void lcd_toggle_enable(uint8_t val);

void lcd_send_byte(uint8_t val, int mode);

void lcd_clear(void);

void lcd_set_cursor(int line, int position);

static void inline lcd_char(char val);

void lcd_string(const char *s);

void lcd_init(void);

#endif
