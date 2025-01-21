/**
 * @file main.c
 * @author Lowie Deferme <lowie.deferme@kuleuven.be>
 * @brief CapBot blink example
 */

#include "capbot.h"
#include <zephyr/kernel.h>

int main(void)
{
    cb_led_init();
    cb_led_on(CB_D15);
    cb_led_off(CB_D16);
    for (;;)
    {
        cb_led_tgl(CB_D15);
        cb_led_tgl(CB_D16);
        k_sleep(K_MSEC(1000));
    }
    return 0; // Never reached
}
