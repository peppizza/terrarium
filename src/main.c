#include "lcd_driver/lcd_driver.h"
#include "pico/stdlib.h"
#include "pico/binary_info.h"
#include "hardware/i2c.h"
#include "pico/cyw43_arch.h"

int main()
{
    stdio_init_all();

    if (cyw43_arch_init())
    {
        printf("Wi-Fi init failed.");
        return -1;
    }

    cyw43_arch_gpio_put(CYW43_WL_GPIO_LED_PIN, 1);
    sleep_ms(1000);
    cyw43_arch_gpio_put(CYW43_WL_GPIO_LED_PIN, 0);

    i2c_init(i2c0, 100 * 1000);
    gpio_set_function(LCD_SDA_PIN, GPIO_FUNC_I2C);
    gpio_set_function(LCD_SCL_PIN, GPIO_FUNC_I2C);
    gpio_pull_up(LCD_SDA_PIN);
    gpio_pull_up(LCD_SCL_PIN);

    i2c_init(i2c1, 100 * 1000);

    bi_decl(bi_2pins_with_func(LCD_SDA_PIN, LCD_SCL_PIN, GPIO_FUNC_I2C));

    lcd_init();

    while (1)
    {
        printf("TODO");
        sleep_ms(500);
    }

    return 0;
}