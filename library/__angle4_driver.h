/*
    __angle4_driver.h

-----------------------------------------------------------------------------

  This file is part of mikroSDK.
  
  Copyright (c) 2017, MikroElektonika - http://www.mikroe.com

  All rights reserved.

----------------------------------------------------------------------------- */

/**
@file   __angle4_driver.h
@brief    Angle4 Driver
@mainpage Angle4 Click
@{

@image html libstock_fb_view.jpg

@}

@defgroup   ANGLE4
@brief      Angle4 Click Driver
@{

| Global Library Prefix | **ANGLE4** |
|:---------------------:|:-----------------:|
| Version               | **1.0.0**    |
| Date                  | **jul 2018.**      |
| Developer             | **MikroE Team**     |

*/
/* -------------------------------------------------------------------------- */

#include "stdint.h"

#ifndef _ANGLE4_H_
#define _ANGLE4_H_

/** 
 * @macro T_ANGLE4_P
 * @brief Driver Abstract type 
 */
#define T_ANGLE4_P    const uint8_t*

/** @defgroup ANGLE4_COMPILE Compilation Config */              /** @{ */

   #define   __ANGLE4_DRV_SPI__                            /**<     @macro __ANGLE4_DRV_SPI__  @brief SPI driver selector */
//  #define   __ANGLE4_DRV_I2C__                            /**<     @macro __ANGLE4_DRV_I2C__  @brief I2C driver selector */                                          
// #define   __ANGLE4_DRV_UART__                           /**<     @macro __ANGLE4_DRV_UART__ @brief UART driver selector */ 

                                                                       /** @} */
/** @defgroup ANGLE4_VAR Variables */                           /** @{ */


/* Register */
extern const uint8_t _ANGLE4_REG_CUSTOMER_CFG_0                ;
extern const uint8_t _ANGLE4_REG_CUSTOMER_CFG_1                ;
extern const uint8_t _ANGLE4_REG_CUSTOMER_CFG_2                ;
extern const uint8_t _ANGLE4_REG_OPERATING_VOLTAGE             ;
extern const uint8_t _ANGLE4_REG_UNLOCK_REGISTER               ;
extern const uint8_t _ANGLE4_REG_CUSTOMER_RESERVED_OTP         ;
extern const uint8_t _ANGLE4_REG_ST_ZERO_RESET_OTP             ;
extern const uint8_t _ANGLE4_REG_CUSTOMER_CONFIG_OTP           ;
extern const uint8_t _ANGLE4_REG_PROGRAM_OPERATING_VOLTAGE     ;
extern const uint8_t _ANGLE4_REG_CONFIG_OF_FULL_CALIBRATION_OTP;

/* Customer Configuration 0 */
extern const uint8_t _ANGLE4_CCFG0_SELECT_UVW_MODE;
extern const uint8_t _ANGLE4_CCFG0_SELECT_PWM_MODE;
extern const uint8_t _ANGLE4_CCFG0_PWM_PERIOD_8193us;
extern const uint8_t _ANGLE4_CCFG0_PWM_PERIOD_4097us;
extern const uint8_t _ANGLE4_CCFG0_PWM_PERIOD_2049us;
extern const uint8_t _ANGLE4_CCFG0_PWM_PERIOD_1025us;
extern const uint8_t _ANGLE4_CCFG0_ABI_360edeg      ;
extern const uint8_t _ANGLE4_CCFG0_ABI_270edeg      ;
extern const uint8_t _ANGLE4_CCFG0_ABI_180edeg      ;
extern const uint8_t _ANGLE4_CCFG0_ABI_90edeg       ;
extern const uint8_t _ANGLE4_CCFG0_UVW_POLE_PAIRS_8 ;
extern const uint8_t _ANGLE4_CCFG0_UVW_POLE_PAIRS_7 ;
extern const uint8_t _ANGLE4_CCFG0_UVW_POLE_PAIRS_6 ;
extern const uint8_t _ANGLE4_CCFG0_UVW_POLE_PAIRS_5 ;
extern const uint8_t _ANGLE4_CCFG0_UVW_POLE_PAIRS_4 ;
extern const uint8_t _ANGLE4_CCFG0_UVW_POLE_PAIRS_3 ;
extern const uint8_t _ANGLE4_CCFG0_UVW_POLE_PAIRS_2 ;
extern const uint8_t _ANGLE4_CCFG0_UVW_POLE_PAIRS_1 ;

/* Customer Configuration 1 */
extern const uint8_t _ANGLE4_CCFG1_ABI_CPR_4096        ;
extern const uint8_t _ANGLE4_CCFG1_ABI_CPR_2048        ;
extern const uint8_t _ANGLE4_CCFG1_ABI_CPR_1024        ;
extern const uint8_t _ANGLE4_CCFG1_ABI_CPR_512         ;
extern const uint8_t _ANGLE4_CCFG1_ABI_CPR_256         ;
extern const uint8_t _ANGLE4_CCFG1_ABI_CPR_128         ;
extern const uint8_t _ANGLE4_CCFG1_ABI_CPR_64          ;
extern const uint8_t _ANGLE4_CCFG1_ABI_CPR_32          ;
extern const uint8_t _ANGLE4_CCFG1_HYSTERESIS_1_4mdeg  ;
extern const uint8_t _ANGLE4_CCFG1_HYSTERESIS_0_7mdeg  ;
extern const uint8_t _ANGLE4_CCFG1_HYSTERESIS_0_35mdeg ;
extern const uint8_t _ANGLE4_CCFG1_HYSTERESIS_0_17mdeg ;
extern const uint8_t _ANGLE4_CCFG1_HYSTERESIS_0_08mdeg ;
extern const uint8_t _ANGLE4_CCFG1_HYSTERESIS_0_04mdeg ;
extern const uint8_t _ANGLE4_CCFG1_HYSTERESIS_0_02mdeg ;
extern const uint8_t _ANGLE4_CCFG1_HYSTERESIS_0_01mdeg ;
extern const uint8_t _ANGLE4_CCFG1_HYSTERESIS_0_005mdeg;
extern const uint8_t _ANGLE4_CCFG1_NO_HYSTERESIS       ;

/* Customer Configuration 2 */
extern const uint8_t _ANGLE4_CCFG2_DIR_COUNTER_CLOCKWISE_ROTATION;
extern const uint8_t _ANGLE4_CCFG2_DIR_CLOCKWISE_ROTATION        ;
extern const uint8_t _ANGLE4_CCFG2_ZERO_LATENCY_MODE_ON          ;
extern const uint8_t _ANGLE4_CCFG2_ZERO_LATENCY_MODE_OFF         ;
extern const uint8_t _ANGLE4_CCFG2_ABS_RESOLUTION_10bit          ;
extern const uint8_t _ANGLE4_CCFG2_ABS_RESOLUTION_12bit          ;
extern const uint8_t _ANGLE4_CCFG2_ABS_RESOLUTION_14bit          ;
extern const uint8_t _ANGLE4_CCFG2_ABS_RESOLUTION_16bit          ;
extern const uint8_t _ANGLE4_CCFG2_SETTINGS_CPR_4096             ;
extern const uint8_t _ANGLE4_CCFG2_SETTINGS_CPR_2048             ;
extern const uint8_t _ANGLE4_CCFG2_SETTINGS_CPR_1024             ;
extern const uint8_t _ANGLE4_CCFG2_SETTINGS_CPR_512              ;
extern const uint8_t _ANGLE4_CCFG2_SETTINGS_CPR_256              ;
extern const uint8_t _ANGLE4_CCFG2_SETTINGS_CPR_128              ;
extern const uint8_t _ANGLE4_CCFG2_SETTINGS_CPR_64               ;
extern const uint8_t _ANGLE4_CCFG2_SETTINGS_CPR_32               ;
extern const uint8_t _ANGLE4_CCFG2_CPR_ABS_RESOLUTION            ;

/* Operating Voltage */
extern const uint8_t _ANGLE4_OPERATING_VOLTAGE_3300mV;
extern const uint8_t _ANGLE4_OPERATING_VOLTAGE_5000mV;

/* Absolute Resolution */
extern const uint8_t _ANGLE4_DATA_RESOLUTION_14bit;
extern const uint8_t _ANGLE4_DATA_RESOLUTION_16bit;
extern const uint8_t _ANGLE4_DATA_RESOLUTION_12bit;
extern const uint8_t _ANGLE4_DATA_RESOLUTION_10bit;

                                                                       /** @} */

#ifdef __cplusplus
extern "C"{
#endif

/** @defgroup ANGLE4_INIT Driver Initialization */              /** @{ */

#ifdef   __ANGLE4_DRV_SPI__
void angle4_spiDriverInit(T_ANGLE4_P gpioObj, T_ANGLE4_P spiObj);
#endif
#ifdef   __ANGLE4_DRV_I2C__
void angle4_i2cDriverInit(T_ANGLE4_P gpioObj, T_ANGLE4_P i2cObj, uint8_t slave);
#endif
#ifdef   __ANGLE4_DRV_UART__
void angle4_uartDriverInit(T_ANGLE4_P gpioObj, T_ANGLE4_P uartObj);
#endif

// GPIO Only Drivers - remove in other cases
void angle4_gpioDriverInit(T_ANGLE4_P gpioObj);
                                                                       /** @} */
/** @defgroup ANGLE4_FUNC Driver Functions */                   /** @{ */

/**
 * @brief Functions for write one byte
 *
 * @param[in] addr    address in which the data will be written
 * @param[in] _data   Data which be written in the address
 */
void angle4_writeByte(uint8_t addr, uint8_t _data);

/**
 * @brief Functions for read byte
 *
 * @param[in] addr    Address which will be read
 * @retval one byte data which is read from the address
 */
uint8_t angle4_readByte( uint8_t addr );

/**
 * @brief Functions for start measurement
 */
void angle4_startMesuremenet();

/**
 * @brief Functions for read Angle
 *
 * @param[out] dataOut    Buffer in which data will be storage
 *
 * @return status
 *
 * Status :
      3-bit Ready (chip is ready)
      2-bit Magnet High ( This indicates that the magnet strength detected by the chip is too strong. When this is flagged
      high consistently, change the weaker magnet or increase the distance between the chip and the magnet.)
      1-bit Magnet Low (This indicates that the magnet strength detected by the chip is too weak. When this is flagged high
      consistently, change the stronger magnet or decrease the distance between the chip and the magnet )
      0-bit Parity
 */
uint8_t angle4_getNewAngle(uint16_t *dataOut);

/**
 * @brief Functions for calibration chip
 *
 * @param[in] dir                  Direction definition (counter-clockwise rotation or clockwise rotation)
 * @param[in] data_resolution      Absolute Resolution ( 10bit, 12bit, 14bit or 16bit)
 */
void angle4_calibration(uint8_t dir, uint8_t data_resolution);

                                                                       /** @} */
#ifdef __cplusplus
} // extern "C"
#endif
#endif

/**
    @example Click_Angle4_STM.c
    @example Click_Angle4_TIVA.c
    @example Click_Angle4_CEC.c
    @example Click_Angle4_KINETIS.c
    @example Click_Angle4_MSP.c
    @example Click_Angle4_PIC.c
    @example Click_Angle4_PIC32.c
    @example Click_Angle4_DSPIC.c
    @example Click_Angle4_AVR.c
    @example Click_Angle4_FT90x.c
    @example Click_Angle4_STM.mbas
    @example Click_Angle4_TIVA.mbas
    @example Click_Angle4_CEC.mbas
    @example Click_Angle4_KINETIS.mbas
    @example Click_Angle4_MSP.mbas
    @example Click_Angle4_PIC.mbas
    @example Click_Angle4_PIC32.mbas
    @example Click_Angle4_DSPIC.mbas
    @example Click_Angle4_AVR.mbas
    @example Click_Angle4_FT90x.mbas
    @example Click_Angle4_STM.mpas
    @example Click_Angle4_TIVA.mpas
    @example Click_Angle4_CEC.mpas
    @example Click_Angle4_KINETIS.mpas
    @example Click_Angle4_MSP.mpas
    @example Click_Angle4_PIC.mpas
    @example Click_Angle4_PIC32.mpas
    @example Click_Angle4_DSPIC.mpas
    @example Click_Angle4_AVR.mpas
    @example Click_Angle4_FT90x.mpas
*/                                                                     /** @} */
/* -------------------------------------------------------------------------- */
/*
  __angle4_driver.h

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