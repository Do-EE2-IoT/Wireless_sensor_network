idf_component_register(SRCS "gatts_table_creat_demo.c" "timer_wakeup.c"
                    INCLUDE_DIRS "."
                    REQUIRES esp_hw_support nvs_flash bt driver LM35 input)
