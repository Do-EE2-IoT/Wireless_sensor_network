set(pre_req LM35 driver esp_adc)
idf_component_register(SRCS "LM35.c"
                    INCLUDE_DIRS "."
                    REQUIRES ${pre_req})
                    