#include <stdio.h>
#include "esp_log.h"
#include "esp_system.h"

#define TAG  "HELLO"

//�û�������ڣ��൱��main����
void app_main()
{
    printf("Hello world!sz-yy.taobao.com.\n");
	ESP_LOGE(TAG, "sz-yy.taobao.com. ERROR.");
	ESP_LOGW(TAG, "sz-yy.taobao.com.WARN.");
	ESP_LOGI(TAG, "sz-yy.taobao.com.INFO.");
	ESP_LOGD(TAG, "sz-yy.taobao.com.DEBUG.");
	ESP_LOGV(TAG, "sz-yy.taobao.com.VERBOSE.");
}
