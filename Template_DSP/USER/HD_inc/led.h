#ifndef __LED_H

#define __LED_H

#define ON      GPIO_ResetBits
#define OFF    GPIO_SetBits

void LED_Init(void);

#endif
