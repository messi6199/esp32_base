/**
 * @file main.c
 * @author Lun
 * @brief
 * @version
 * 1.0：初始版本
 * @date 2025-09-23
 *
 * @copyright Copyright (c) 2025
 *
 */
#include <stdio.h>
#include "driver/gpio.h"

static const char *TAG = "Wireless Link";
#define LOG_LOCAL_LEVEL ESP_LOG_VERBOSE // 在头文件之前宏定义他
#include "esp_log.h"

#include "freertos/FreeRTOS.h"
#include "freertos/task.h"

#define LED_PIN 17
#define LED_PIN_SEL (1 << LED_PIN)

#define LED_OFF gpio_set_level(LED_PIN, 1)
#define LED_ON gpio_set_level(LED_PIN, 0)

// void bsp_led_init()
// {
// 	gpio_config_t io_conf;
// 	io_conf.intr_type = GPIO_INTR_DISABLE;
// 	io_conf.mode = GPIO_MODE_OUTPUT;
// 	io_conf.pin_bit_mask = LED_PIN_SEL;
// 	io_conf.pull_down_en = 0;
// 	io_conf.pull_up_en = 0;
// 	gpio_config(&io_conf);
// }

void bsp_delay_ms(uint32_t cms)
{
	TickType_t xDelay = cms / portTICK_PERIOD_MS;
	vTaskDelay(xDelay);
}

void app_main(void)
{
	// uint32_t count = 0;
	// bsp_led_init();
	esp_log_level_set("*", ESP_LOG_ERROR);
	while (1)
	{
		// if (count % 2 == 0)
		// 	LED_ON;
		// else
		// 	LED_OFF;

		// count++;
		bsp_delay_ms(1000);
		ESP_LOGE(TAG, "I am esp32 error log");
	}
}
