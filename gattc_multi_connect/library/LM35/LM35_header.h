#ifndef __LM35_HEADER_H_
#define __LM35_HEADER_H_

void LM35_de_init(void);
esp_err_t LM35_read_data(void);
void LM35_init(void);

#endif