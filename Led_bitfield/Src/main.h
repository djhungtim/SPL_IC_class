/*
 * main.h
 *
 *  Created on: Jan 23, 2022
 *      Author: Tim
 */

#ifndef MAIN_H_
#define MAIN_H_


typedef struct {
	uint32_t gpio_ena      : 1;
	uint32_t gpio_enb      : 1;
	uint32_t gpio_enc      : 1;
	uint32_t gpio_end      : 1;
	uint32_t gpio_ene      : 1;
	uint32_t gpio_enf      : 1;
	uint32_t gpio_eng      : 1;
	uint32_t gpio_enh      : 1;
	uint32_t gpio_eni      : 1;
	uint32_t gpio_enj      : 1;
	uint32_t gpio_enk      : 1;
	uint32_t reserved1     : 1;
	uint32_t crc_en        : 1;
	uint32_t reserved2     : 5;
	uint32_t bkpsram_en    : 5;
	uint32_t reserved3     : 1;
	uint32_t dtcmram_en    : 1;
	uint32_t dma1_en       : 1;
	uint32_t dma2_en       : 1;
	uint32_t dma2d_en      : 1;
	uint32_t reserved4     : 1;
	uint32_t ethmac_en     : 1;
	uint32_t ethmactx_en   : 1;
	uint32_t ethmacrx_en   : 1;
	uint32_t ethmacptpt_en : 1;
	uint32_t otghs_en      : 1;
	uint32_t otghsulpi_en  : 1;
	uint32_t reserved5     : 1;
}RCC_AHB1ENR_t;

typedef struct {
	uint32_t pin_0      :2;
	uint32_t pin_1      :2;
	uint32_t pin_2      :2;
	uint32_t pin_3      :2;
	uint32_t pin_4      :2;
	uint32_t pin_5      :2;
	uint32_t pin_6      :2;
	uint32_t pin_7      :2;
	uint32_t pin_8      :2;
	uint32_t pin_9      :2;
	uint32_t pin_10     :2;
	uint32_t pin_11     :2;
	uint32_t pin_12     :2;
	uint32_t pin_13     :2;
	uint32_t pin_14     :2;
	uint32_t pin_15     :2;
}GPIOx_MODER_t;

typedef struct {
	uint32_t pin_0      :1;
	uint32_t pin_1      :1;
	uint32_t pin_2      :1;
	uint32_t pin_3      :1;
	uint32_t pin_4      :1;
	uint32_t pin_5      :1;
	uint32_t pin_6      :1;
	uint32_t pin_7      :1;
	uint32_t pin_8      :1;
	uint32_t pin_9      :1;
	uint32_t pin_10     :1;
	uint32_t pin_11     :1;
	uint32_t pin_12     :1;
	uint32_t pin_13     :1;
	uint32_t pin_14     :1;
	uint32_t pin_15     :1;
	uint32_t reserved   :16;
}GPIOx_ODR_t;





#endif /* MAIN_H_ */
