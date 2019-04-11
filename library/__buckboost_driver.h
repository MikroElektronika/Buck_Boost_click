/*
    __buckboost_driver.h

-----------------------------------------------------------------------------

  This file is part of mikroSDK.
  
  Copyright (c) 2017, MikroElektonika - http://www.mikroe.com

  All rights reserved.

----------------------------------------------------------------------------- */

/**
@file   __buckboost_driver.h
@brief    Buck_Boost Driver
@mainpage Buck_Boost Click
@{

@image html libstock_fb_view.jpg

@}

@defgroup   BUCKBOOST
@brief      Buck_Boost Click Driver
@{

| Global Library Prefix | **BUCKBOOST** |
|:---------------------:|:-----------------:|
| Version               | **1.0.0**    |
| Date                  | **Dec 2018.**      |
| Developer             | **Nenad Filipovic**     |

*/
/* -------------------------------------------------------------------------- */

#include "stdint.h"

#ifndef _BUCKBOOST_H_
#define _BUCKBOOST_H_

/** 
 * @macro T_BUCKBOOST_P
 * @brief Driver Abstract type 
 */
#define T_BUCKBOOST_P    const uint8_t*

/** @defgroup BUCKBOOST_COMPILE Compilation Config */              /** @{ */

//  #define   __BUCKBOOST_DRV_SPI__                            /**<     @macro __BUCKBOOST_DRV_SPI__  @brief SPI driver selector */
//  #define   __BUCKBOOST_DRV_I2C__                            /**<     @macro __BUCKBOOST_DRV_I2C__  @brief I2C driver selector */                                          
// #define   __BUCKBOOST_DRV_UART__                           /**<     @macro __BUCKBOOST_DRV_UART__ @brief UART driver selector */ 

                                                                       /** @} */
/** @defgroup BUCKBOOST_VAR Variables */                           /** @{ */



                                                                       /** @} */
/** @defgroup BUCKBOOST_TYPES Types */                             /** @{ */



                                                                       /** @} */
#ifdef __cplusplus
extern "C"{
#endif

/** @defgroup BUCKBOOST_INIT Driver Initialization */              /** @{ */

#ifdef   __BUCKBOOST_DRV_SPI__
void buckboost_spiDriverInit(T_BUCKBOOST_P gpioObj, T_BUCKBOOST_P spiObj);
#endif
#ifdef   __BUCKBOOST_DRV_I2C__
void buckboost_i2cDriverInit(T_BUCKBOOST_P gpioObj, T_BUCKBOOST_P i2cObj, uint8_t slave);
#endif
#ifdef   __BUCKBOOST_DRV_UART__
void buckboost_uartDriverInit(T_BUCKBOOST_P gpioObj, T_BUCKBOOST_P uartObj);
#endif

// GPIO Only Drivers - remove in other cases
void buckboost_gpioDriverInit(T_BUCKBOOST_P gpioObj);
                                                                       /** @} */
/** @defgroup BUCKBOOST_FUNC Driver Functions */                   /** @{ */

/**
 * @brief Enable the converter function
 *
 * Function enable the converter of LTC3129-1 on Buck Boost Click
 * by set RST ( RUN ) pin ( logic 1 ).
 */
void buckboost_enable();

/**
 * @brief Disable the converter function
 *
 * Function disable the converter of LTC3129-1 on Buck Boost Click
 * by clear RST ( RUN ) pin ( logic 0 ).
 */
void buckboost_disable();

/**
 * @brief Set fixed frequency PWM operation function
 *
 * Function set fixed frequency PWM operation mode
 * of LTC3129-1 on Buck Boost Click
 * by set PWM pin ( logic 1 ).
 */
void buckboost_setModeFixedFreq();

/**
 * @brief Enables automatic burst mode operation
 *
 * Function enables automatic burst mode operation
 * of LTC3129-1 on Buck Boost Click
 * by clear PWM pin ( logic 0 ).
 */
void buckboost_enablesAutoBurstMode();

/**
 * @brief Set default configuration function
 *
 * Function set default configuration function
 * of LTC3129-1 on Buck Boost Click
 * by enable the converter and set fixed frequency PWM operation.
 */
void buckboost_defaultConfig();

/**
 * @brief Set the output voltage of 2500 mv function
 *
 * Function set the output voltage of 2500 mv function
 * of LTC3129-1 on Buck Boost Click
 * by :
 * - VS1 : clear INT pin ( logic 0 ),
 * - VS2 : clear AN  pin ( logic 0 ) and
 * - VS3 : clear CS  pin ( logic 0 ).
 */
void buckboost_set2500mV();

/**
 * @brief Set the output voltage of 3000 mv function
 *
 * Function set the output voltage of 3000 mv function
 * of LTC3129-1 on Buck Boost Click
 * by :
 * - VS1 : clear INT pin ( logic 0 ),
 * - VS2 : clear AN  pin ( logic 0 ) and
 * - VS3 : set   CS  pin ( logic 1 ).
 */
void buckboost_set3300mV();

/**
 * @brief Set the output voltage of 4100 mv function
 *
 * Function set the output voltage of 4100 mv function
 * of LTC3129-1 on Buck Boost Click
 * by :
 * - VS1 : clear INT pin ( logic 0 ),
 * - VS2 : set   AN  pin ( logic 1 ) and
 * - VS3 : clear CS  pin ( logic 0 ).
 */
void buckboost_set4100mV();

/**
 * @brief Set the output voltage of 5000 mv function
 *
 * Function set the output voltage of 5000 mv function
 * of LTC3129-1 on Buck Boost Click
 * by :
 * - VS1 : clear INT pin ( logic 0 ),
 * - VS2 : set   AN  pin ( logic 1 ) and
 * - VS3 : set   CS  pin ( logic 1 ).
 */
void buckboost_set5000mV();
 
/**
 * @brief Set the output voltage of 6900 mv function
 *
 * Function set the output voltage of 6900 mv function
 * of LTC3129-1 on Buck Boost Click
 * by :
 * - VS1 : set   INT pin ( logic 1 ),
 * - VS2 : clear AN  pin ( logic 0 ) and
 * - VS3 : clear CS  pin ( logic 0 ).
 */
void buckboost_set6900mV();
 
/**
 * @brief Set the output voltage of 8200 mv function
 *
 * Function set the output voltage of 8200 mv function
 * of LTC3129-1 on Buck Boost Click
 * by :
 * - VS1 : set   INT pin ( logic 1 ),
 * - VS2 : clear AN  pin ( logic 0 ) and
 * - VS3 : set   CS  pin ( logic 1 ).
 */
void buckboost_set8200mV();
  
/**
 * @brief Set the output voltage of 12000 mv function
 *
 * Function set the output voltage of 12000 mv function
 * of LTC3129-1 on Buck Boost Click
 * by :
 * - VS1 : set   INT pin ( logic 1 ),
 * - VS2 : set   AN  pin ( logic 1 ) and
 * - VS3 : clear CS  pin ( logic 0 ).
 */
void buckboost_set12000mV();
  
/**
 * @brief Set the output voltage of 15000 mv function
 *
 * Function set the output voltage of 15000 mv function
 * of LTC3129-1 on Buck Boost Click
 * by :
 * - VS1 : set   INT pin ( logic 1 ),
 * - VS2 : set   AN  pin ( logic 1 ) and
 * - VS3 : set   CS  pin ( logic 1 ).
 */
void buckboost_set15000mV();




                                                                       /** @} */
#ifdef __cplusplus
} // extern "C"
#endif
#endif

/**
    @example Click_Buck_Boost_STM.c
    @example Click_Buck_Boost_TIVA.c
    @example Click_Buck_Boost_CEC.c
    @example Click_Buck_Boost_KINETIS.c
    @example Click_Buck_Boost_MSP.c
    @example Click_Buck_Boost_PIC.c
    @example Click_Buck_Boost_PIC32.c
    @example Click_Buck_Boost_DSPIC.c
    @example Click_Buck_Boost_AVR.c
    @example Click_Buck_Boost_FT90x.c
    @example Click_Buck_Boost_STM.mbas
    @example Click_Buck_Boost_TIVA.mbas
    @example Click_Buck_Boost_CEC.mbas
    @example Click_Buck_Boost_KINETIS.mbas
    @example Click_Buck_Boost_MSP.mbas
    @example Click_Buck_Boost_PIC.mbas
    @example Click_Buck_Boost_PIC32.mbas
    @example Click_Buck_Boost_DSPIC.mbas
    @example Click_Buck_Boost_AVR.mbas
    @example Click_Buck_Boost_FT90x.mbas
    @example Click_Buck_Boost_STM.mpas
    @example Click_Buck_Boost_TIVA.mpas
    @example Click_Buck_Boost_CEC.mpas
    @example Click_Buck_Boost_KINETIS.mpas
    @example Click_Buck_Boost_MSP.mpas
    @example Click_Buck_Boost_PIC.mpas
    @example Click_Buck_Boost_PIC32.mpas
    @example Click_Buck_Boost_DSPIC.mpas
    @example Click_Buck_Boost_AVR.mpas
    @example Click_Buck_Boost_FT90x.mpas
*/                                                                     /** @} */
/* -------------------------------------------------------------------------- */
/*
  __buckboost_driver.h

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