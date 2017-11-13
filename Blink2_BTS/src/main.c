#include "em_device.h"
#include "em_chip.h"
#include "em_cmu.h"
#include "em_gpio.h"

int main(void)
{
  /* Chip errata */
  CHIP_Init();
  CMU_ClockEnable(cmuClock_GPIO, true);

  /* Infinite loop */
  while (1)
  {
        // Turn on the LED
	  	GPIO_PinModeSet(gpioPortC, 12, gpioModePushPull, 1);


        // Add some delay
        for(volatile long i=0; i<1000000; i++);

        // Turn off the LED
        GPIO_PinModeSet(gpioPortC, 12, gpioModePushPull, 0);


        // Add some more delay
        for(volatile long i=0; i<1000000; i++);
  }

}
