/*
    __buckboost_driver.c

-----------------------------------------------------------------------------

  This file is part of mikroSDK.

  Copyright (c) 2017, MikroElektonika - http://www.mikroe.com

  All rights reserved.

----------------------------------------------------------------------------- */

#include "__buckboost_driver.h"
#include "__buckboost_hal.c"

/* ------------------------------------------------------------------- MACROS */



/* ---------------------------------------------------------------- VARIABLES */

#ifdef   __BUCKBOOST_DRV_I2C__
static uint8_t _slaveAddress;
#endif

/* -------------------------------------------- PRIVATE FUNCTION DECLARATIONS */



/* --------------------------------------------- PRIVATE FUNCTION DEFINITIONS */



/* --------------------------------------------------------- PUBLIC FUNCTIONS */

#ifdef   __BUCKBOOST_DRV_SPI__

void buckboost_spiDriverInit(T_BUCKBOOST_P gpioObj, T_BUCKBOOST_P spiObj)
{
    hal_spiMap( (T_HAL_P)spiObj );
    hal_gpioMap( (T_HAL_P)gpioObj );

    // ... power ON
    // ... configure CHIP
}

#endif
#ifdef   __BUCKBOOST_DRV_I2C__

void buckboost_i2cDriverInit(T_BUCKBOOST_P gpioObj, T_BUCKBOOST_P i2cObj, uint8_t slave)
{
    _slaveAddress = slave;
    hal_i2cMap( (T_HAL_P)i2cObj );
    hal_gpioMap( (T_HAL_P)gpioObj );

    // ... power ON
    // ... configure CHIP
}

#endif
#ifdef   __BUCKBOOST_DRV_UART__

void buckboost_uartDriverInit(T_BUCKBOOST_P gpioObj, T_BUCKBOOST_P uartObj)
{
    hal_uartMap( (T_HAL_P)uartObj );
    hal_gpioMap( (T_HAL_P)gpioObj );

    // ... power ON
    // ... configure CHIP
}

#endif

// GPIO Only Drivers - remove in other cases
void buckboost_gpioDriverInit(T_BUCKBOOST_P gpioObj)
{
    hal_gpioMap( (T_HAL_P)gpioObj );

    // ... power ON
}

/* ----------------------------------------------------------- IMPLEMENTATION */




/* Enable the converter function */
void buckboost_enable()
{
    hal_gpio_rstSet( 1 );
}

/* Disable the converter function */
void buckboost_disable()
{
    hal_gpio_rstSet( 0 );
}

/* Set fixed frequency PWM operation function */
void buckboost_setModeFixedFreq()
{
    hal_gpio_pwmSet( 1 );
}

/* Enables automatic burst mode operation */
void buckboost_enablesAutoBurstMode()
{
    hal_gpio_pwmSet( 0 );
}

/* Set default configuration function */
void buckboost_defaultConfig()
{
    buckboost_enable();
    Delay_1ms();
    buckboost_setModeFixedFreq();
}

/* Set the output voltage of 2500 mv function */
void buckboost_set2500mV()
{
    hal_gpio_intSet( 0 );
    Delay_1ms();
    hal_gpio_anSet( 0 );
    Delay_1ms();
    hal_gpio_csSet( 0 );
}

/* Set the output voltage of 3000 mv function */
void buckboost_set3300mV()
{
    hal_gpio_csSet( 0 );
    Delay_1ms();
    hal_gpio_anSet( 0 );
    Delay_1ms();
    hal_gpio_intSet( 1 );
}

/* Set the output voltage of 4100 mv function */
void buckboost_set4100mV()
{
    hal_gpio_csSet( 0 );
    Delay_1ms();
    hal_gpio_anSet( 1 );
    Delay_1ms();
    hal_gpio_intSet( 0 );
}

/* Set the output voltage of 5000 mv function */
void buckboost_set5000mV()
{
    hal_gpio_csSet( 0 );
    Delay_1ms();
    hal_gpio_anSet( 1 );
    Delay_1ms();
    hal_gpio_intSet( 1 );
}

/* Set the output voltage of 6900 mv function */
void buckboost_set6900mV()
{
    hal_gpio_csSet( 1 );
    Delay_1ms();
    hal_gpio_anSet( 0 );
    Delay_1ms();
    hal_gpio_intSet( 0 );
}

/* Set the output voltage of 8200 mv function */
void buckboost_set8200mV()
{
    hal_gpio_csSet( 1 );
    Delay_1ms();
    hal_gpio_anSet( 0 );
    Delay_1ms();
    hal_gpio_intSet( 1 );
}

/* Set the output voltage of 12000 mv function */
void buckboost_set12000mV()
{
    hal_gpio_csSet( 1 );
    Delay_1ms();
    hal_gpio_anSet( 1 );
    Delay_1ms();
    hal_gpio_intSet( 0 );
}

/* Set the output voltage of 15000 mv function */
void buckboost_set15000mV()
{
    hal_gpio_csSet( 1 );
    Delay_1ms();
    hal_gpio_anSet( 1 );
    Delay_1ms();
    hal_gpio_intSet( 1 );
}



/* -------------------------------------------------------------------------- */
/*
  __buckboost_driver.c

  Copyright (c) 2017, MikroElektonika - http://www.mikroe.com

  All rights reserved.

Redistribution and use in source and binary forms, with or without
modification, are permitted provided that the following conditions are met:

1. Redistributions of source code must retain the above copyright
   notice, this list of conditions and the following disclaimer.

2. Redistributions in binary form must reproduce the above copyright
   notice, this list of conditions and the following disclaimer in the
   documentation and/or other materials provided with the distribution.

3. All advertising materials mentioning features or use of this software
   must display the following acknowledgement:
   This product includes software developed by the MikroElektonika.

4. Neither the name of the MikroElektonika nor the
   names of its contributors may be used to endorse or promote products
   derived from this software without specific prior written permission.

THIS SOFTWARE IS PROVIDED BY MIKROELEKTRONIKA ''AS IS'' AND ANY
EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
DISCLAIMED. IN NO EVENT SHALL MIKROELEKTRONIKA BE LIABLE FOR ANY
DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
(INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND
ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
(INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.

----------------------------------------------------------------------------- */