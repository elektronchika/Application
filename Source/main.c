// ----------------------------------------------------------------------------------------------------------------------
// Copyright (C) 2016 by MED-EL Elektromedizinische Geraete GmbH. All rights reserved!
// ----------------------------------------------------------------------------------------------------------------------

/* Includes ------------------------------------------------------------------*/
#include "main.h"

int main(void) {

  int i;
  DioPinState_t PA0_State;
  
  const DioConfig_t * DioConfig = Dio_ConfigGet();

  // GPIOD clock enable
  RCC->AHB1ENR |= RCC_AHB1ENR_GPIOAEN; // Enable GPIOA clock
  RCC->AHB1ENR |= RCC_AHB1ENR_GPIODEN; // Enable GPIOD clock
  
  Dio_Init(DioConfig);
	//GPIOD->MODER = GPIO_MODER_MODER12_0 + GPIO_MODER_MODER13_0 + GPIO_MODER_MODER14_0 + GPIO_MODER_MODER15_0; // Set PD12... PD15 as outputs (LD3..LD6 LEDs)
//  GPIOD->MODER = GPIO_MODER_MODER14_0;// + GPIO_MODER_MODER13_0 + GPIO_MODER_MODER14_0 + GPIO_MODER_MODER15_0; // Set PD12... PD15 as outputs (LD3..LD6 LEDs)

  while (1) {
//    GPIOD->ODR ^= (GPIO_ODR_ODR_14);  // Toggle on all LEDs
    //Dio_ChannelWrite(PD14, DIO_LOW);
    //for (i = 0; i < 1000000; i++);
    //Dio_ChannelWrite(PD14, DIO_HIGH);
    //for (i = 0; i < 1000000; i++);
    Dio_ChannelToggle(PD14);
    for (i = 0; i < 1000000; i++);
    
    PA0_State = Dio_ChannelRead(PA0);
    Dio_ChannelWrite(PD15, PA0_State);
  }
  //return 0;
}
