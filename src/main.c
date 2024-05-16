#include "include/lcd_driver.h"
#include "pico/stdlib.h"
#include "pico/binary_info.h"
#include "hardware/i2c.h"

int main()
{
    stdio_init_all();

    i2c_init(i2c_default, 100 * 1000);
    gpio_set_function(LCD_SDA_PIN, GPIO_FUNC_I2C);
    gpio_set_function(LCD_SCL_PIN, GPIO_FUNC_I2C);
    gpio_pull_up(LCD_SDA_PIN);
    gpio_pull_up(LCD_SCL_PIN);

    bi_decl(bi_2pins_with_func(LCD_SDA_PIN, LCD_SCL_PIN, GPIO_FUNC_I2C));

    lcd_init();

    lcd_set_cursor(0, 0);
    lcd_string("WAOW");
    lcd_set_cursor(1, 5);
    lcd_string("AWESOME");

    return 0;
}