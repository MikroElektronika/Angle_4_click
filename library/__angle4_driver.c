/*
    __angle4_driver.c

-----------------------------------------------------------------------------

  This file is part of mikroSDK.

  Copyright (c) 2017, MikroElektonika - http://www.mikroe.com

  All rights reserved.

----------------------------------------------------------------------------- */

#include "__angle4_driver.h"
#include "__angle4_hal.c"

/* ------------------------------------------------------------------- MACROS */

/* Register */
const uint8_t _ANGLE4_REG_CUSTOMER_CFG_0                   = 0x04;
const uint8_t _ANGLE4_REG_CUSTOMER_CFG_1                   = 0x05;
const uint8_t _ANGLE4_REG_CUSTOMER_CFG_2                   = 0x06;
const uint8_t _ANGLE4_REG_OPERATING_VOLTAGE                = 0x0A;
const uint8_t _ANGLE4_REG_UNLOCK_REGISTER                  = 0x10;
const uint8_t _ANGLE4_REG_CUSTOMER_RESERVED_OTP            = 0x11;
const uint8_t _ANGLE4_REG_ST_ZERO_RESET_OTP                = 0x12;
const uint8_t _ANGLE4_REG_CUSTOMER_CONFIG_OTP              = 0x13;
const uint8_t _ANGLE4_REG_PROGRAM_OPERATING_VOLTAGE        = 0x14;
const uint8_t _ANGLE4_REG_CONFIG_OF_FULL_CALIBRATION_OTP   = 0x1B;

/* Customer Configuration 0 */
const uint8_t _ANGLE4_CCFG0_SELECT_UVW_MODE = 0x80;
const uint8_t _ANGLE4_CCFG0_SELECT_PWM_MODE = 0x00;
const uint8_t _ANGLE4_CCFG0_PWM_PERIOD_8193us = 0x60;
const uint8_t _ANGLE4_CCFG0_PWM_PERIOD_4097us = 0x40;
const uint8_t _ANGLE4_CCFG0_PWM_PERIOD_2049us = 0x20;
const uint8_t _ANGLE4_CCFG0_PWM_PERIOD_1025us = 0x00;
const uint8_t _ANGLE4_CCFG0_ABI_360edeg       = 0x18;
const uint8_t _ANGLE4_CCFG0_ABI_270edeg       = 0x10;
const uint8_t _ANGLE4_CCFG0_ABI_180edeg       = 0x08;
const uint8_t _ANGLE4_CCFG0_ABI_90edeg        = 0x00;
const uint8_t _ANGLE4_CCFG0_UVW_POLE_PAIRS_8  = 0x07;
const uint8_t _ANGLE4_CCFG0_UVW_POLE_PAIRS_7  = 0x06;
const uint8_t _ANGLE4_CCFG0_UVW_POLE_PAIRS_6  = 0x05;
const uint8_t _ANGLE4_CCFG0_UVW_POLE_PAIRS_5  = 0x04;
const uint8_t _ANGLE4_CCFG0_UVW_POLE_PAIRS_4  = 0x03;
const uint8_t _ANGLE4_CCFG0_UVW_POLE_PAIRS_3  = 0x02;
const uint8_t _ANGLE4_CCFG0_UVW_POLE_PAIRS_2  = 0x01;
const uint8_t _ANGLE4_CCFG0_UVW_POLE_PAIRS_1  = 0x00;

/* Customer Configuration 1 */
const uint8_t _ANGLE4_CCFG1_ABI_CPR_4096         = 0x70;
const uint8_t _ANGLE4_CCFG1_ABI_CPR_2048         = 0x60;
const uint8_t _ANGLE4_CCFG1_ABI_CPR_1024         = 0x50;
const uint8_t _ANGLE4_CCFG1_ABI_CPR_512          = 0x40;
const uint8_t _ANGLE4_CCFG1_ABI_CPR_256          = 0x30;
const uint8_t _ANGLE4_CCFG1_ABI_CPR_128          = 0x20;
const uint8_t _ANGLE4_CCFG1_ABI_CPR_64           = 0x10;
const uint8_t _ANGLE4_CCFG1_ABI_CPR_32           = 0x00;
const uint8_t _ANGLE4_CCFG1_HYSTERESIS_1_4mdeg   = 0x09;
const uint8_t _ANGLE4_CCFG1_HYSTERESIS_0_7mdeg   = 0x08;
const uint8_t _ANGLE4_CCFG1_HYSTERESIS_0_35mdeg  = 0x07;
const uint8_t _ANGLE4_CCFG1_HYSTERESIS_0_17mdeg  = 0x06;
const uint8_t _ANGLE4_CCFG1_HYSTERESIS_0_08mdeg  = 0x05;
const uint8_t _ANGLE4_CCFG1_HYSTERESIS_0_04mdeg  = 0x04;
const uint8_t _ANGLE4_CCFG1_HYSTERESIS_0_02mdeg  = 0x03;
const uint8_t _ANGLE4_CCFG1_HYSTERESIS_0_01mdeg  = 0x02;
const uint8_t _ANGLE4_CCFG1_HYSTERESIS_0_005mdeg = 0x01;
const uint8_t _ANGLE4_CCFG1_NO_HYSTERESIS        = 0x00;

/* Customer Configuration 2 */
const uint8_t _ANGLE4_CCFG2_DIR_COUNTER_CLOCKWISE_ROTATION  = 0x80;
const uint8_t _ANGLE4_CCFG2_DIR_CLOCKWISE_ROTATION          = 0x00;
const uint8_t _ANGLE4_CCFG2_ZERO_LATENCY_MODE_ON            = 0x40;
const uint8_t _ANGLE4_CCFG2_ZERO_LATENCY_MODE_OFF           = 0x00;
const uint8_t _ANGLE4_CCFG2_ABS_RESOLUTION_10bit            = 0x30;
const uint8_t _ANGLE4_CCFG2_ABS_RESOLUTION_12bit            = 0x20;
const uint8_t _ANGLE4_CCFG2_ABS_RESOLUTION_14bit            = 0x10;
const uint8_t _ANGLE4_CCFG2_ABS_RESOLUTION_16bit            = 0x00;
const uint8_t _ANGLE4_CCFG2_SETTINGS_CPR_4096               = 0x06;
const uint8_t _ANGLE4_CCFG2_SETTINGS_CPR_2048               = 0x06;
const uint8_t _ANGLE4_CCFG2_SETTINGS_CPR_1024               = 0x04;
const uint8_t _ANGLE4_CCFG2_SETTINGS_CPR_512                = 0x04;
const uint8_t _ANGLE4_CCFG2_SETTINGS_CPR_256                = 0x03;
const uint8_t _ANGLE4_CCFG2_SETTINGS_CPR_128                = 0x02;
const uint8_t _ANGLE4_CCFG2_SETTINGS_CPR_64                 = 0x02;
const uint8_t _ANGLE4_CCFG2_SETTINGS_CPR_32                 = 0x02;
const uint8_t _ANGLE4_CCFG2_CPR_ABS_RESOLUTION              = 0x04;

/* Operating Voltage */
const uint8_t _ANGLE4_OPERATING_VOLTAGE_3300mV   = 0x00;
const uint8_t _ANGLE4_OPERATING_VOLTAGE_5000mV   = 0x02;

/* Absolute Resolution */
const uint8_t _ANGLE4_DATA_RESOLUTION_14bit = 0x10;
const uint8_t _ANGLE4_DATA_RESOLUTION_16bit = 0x00;
const uint8_t _ANGLE4_DATA_RESOLUTION_12bit = 0x30;
const uint8_t _ANGLE4_DATA_RESOLUTION_10bit = 0x30;
/* ---------------------------------------------------------------- VARIABLES */

#ifdef   __ANGLE4_DRV_I2C__
static uint8_t _slaveAddress;
#endif

static uint16_t newAngle;
static uint8_t _resolution;

/* -------------------------------------------- PRIVATE FUNCTION DECLARATIONS */



/* --------------------------------------------- PRIVATE FUNCTION DEFINITIONS */



/* --------------------------------------------------------- PUBLIC FUNCTIONS */

#ifdef   __ANGLE4_DRV_SPI__

void angle4_spiDriverInit(T_ANGLE4_P gpioObj, T_ANGLE4_P spiObj)
{
    hal_spiMap( (T_HAL_P)spiObj );
    hal_gpioMap( (T_HAL_P)gpioObj );

    hal_gpio_csSet( 1 );
}

#endif
#ifdef   __ANGLE4_DRV_I2C__

void angle4_i2cDriverInit(T_ANGLE4_P gpioObj, T_ANGLE4_P i2cObj, uint8_t slave)
{
    _slaveAddress = slave;
    hal_i2cMap( (T_HAL_P)i2cObj );
    hal_gpioMap( (T_HAL_P)gpioObj );
}

#endif
#ifdef   __ANGLE4_DRV_UART__

void angle4_uartDriverInit(T_ANGLE4_P gpioObj, T_ANGLE4_P uartObj)
{
    hal_uartMap( (T_HAL_P)uartObj );
    hal_gpioMap( (T_HAL_P)gpioObj );
}

#endif

/* ----------------------------------------------------------- IMPLEMENTATION */

void angle4_writeByte(uint8_t addr, uint8_t _data)
{
    uint8_t writeData[ 2 ];

    writeData[ 0 ] = addr | 0x40;
    writeData[ 1 ] = _data;
    
    hal_gpio_csSet( 0 );
    hal_spiWrite(writeData, 2);
    hal_gpio_csSet( 1 );
}

uint8_t angle4_readByte( uint8_t addr )
{
    uint8_t writeData[ 2 ];
    uint8_t readData[ 2 ];
    
    writeData[ 0 ] = addr | 0x80;
    
    hal_gpio_csSet( 0 );
    hal_spiTransfer(writeData, readData, 2);
    hal_gpio_csSet( 1 );
    
    return readData[ 1 ];
}

void angle4_startMesuremenet()
{
    uint8_t writeData[ 1 ];
    
    writeData[ 0 ] = 0x80;

    hal_gpio_csSet( 0 );
    hal_spiWrite( writeData, 1 );
    hal_gpio_csSet( 1 );
}

uint8_t angle4_getNewAngle(uint16_t *dataOut)
{
    uint8_t readReg[ 3 ] = { 0 };
    uint16_t angleData;
    uint8_t status;

    hal_gpio_csSet( 1 );
    hal_spiRead( readReg, 3 );
    hal_gpio_csSet( 0 );
    
    angleData = readReg[0];
    angleData = angleData << 8;
    angleData = angleData | readReg[1];
    
    /* Status 0x0F - Ready, MHI, MLO, Parity */
    status = readReg[2] >> 4;
    
    if (_resolution == _ANGLE4_DATA_RESOLUTION_14bit)
    {
        angleData = angleData >> 2;
        newAngle = angleData * 0.02197;
        /* Status 0x0F - Ready, MHI, MLO, Parity */
        status = (readReg[1] & 0x03) << 2;
        status |= (readReg[2] & 0xC0) >> 6;
    }
    else if (_resolution == _ANGLE4_DATA_RESOLUTION_12bit)
    {
        angleData = angleData >> 4;
        newAngle = angleData * 0.087890;
        /* Status 0x0F - Ready, MHI, MLO, Parity */
        status = readReg[1] & 0x0F;
    }
    else if (_resolution == _ANGLE4_DATA_RESOLUTION_10bit)
    {
        angleData = angleData >> 6;
        newAngle = angleData * 0.35156;
        /* Status 0x0F - Ready, MHI, MLO, Parity */
        status = (readReg[1] >> 2) & 0x0F;
    }
    else
    {
        newAngle = angleData * 0.005493247;
        /* Status 0x0F - Ready, MHI, MLO, Parity */
        status = (readReg[2] >> 4) & 0x0F;
    }
    
    *dataOut = newAngle;
    return status;
}

void angle4_calibration(uint8_t dir, uint8_t data_resolution)
{
    _resolution = data_resolution;
    
    angle4_writeByte(_ANGLE4_REG_CUSTOMER_CFG_2,  dir | data_resolution | _ANGLE4_CCFG2_SETTINGS_CPR_4096 );
                                                 
    angle4_writeByte( _ANGLE4_REG_UNLOCK_REGISTER, 0xAB);
    angle4_writeByte( _ANGLE4_REG_CUSTOMER_RESERVED_OTP, 0xA1);
    angle4_writeByte( _ANGLE4_REG_ST_ZERO_RESET_OTP, 0xA2);
    angle4_writeByte( _ANGLE4_REG_CUSTOMER_CONFIG_OTP, 0xA3);
    angle4_writeByte( _ANGLE4_REG_PROGRAM_OPERATING_VOLTAGE, 0xA4);
    angle4_writeByte( _ANGLE4_REG_CONFIG_OF_FULL_CALIBRATION_OTP, 0xA5);
    angle4_writeByte(0x00, 0xAA);
}


/* -------------------------------------------------------------------------- */
/*
  __angle4_driver.c

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