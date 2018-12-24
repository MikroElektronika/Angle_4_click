/*
Example for Angle4 Click

    Date          : jul 2018.
    Author        : MikroE Team

Test configuration PIC :
    
    MCU             : P18F87K22
    Dev. Board      : EasyPIC PRO v7
    PIC Compiler ver : v7.2.0.0

---

Description :

The application is composed of three sections :

- System Initialization - Intializes SPI module and set CS pin as OUTPUT
- Application Initialization - Driver intialization, standard configurations and start measurement
- Application Task - (code snippet) -  Reads Angle in degreeses and logs data to USBUART every 200 ms.

*/

#include "Click_Angle4_types.h"
#include "Click_Angle4_config.h"

uint16_t Angle;
char demoText[ 30 ] = {0};

void systemInit()
{
    mikrobus_gpioInit( _MIKROBUS1, _MIKROBUS_CS_PIN, _GPIO_OUTPUT );
    mikrobus_spiInit( _MIKROBUS1, &_ANGLE4_SPI_CFG[0] );
    mikrobus_logInit( _LOG_USBUART, 115200 );
    mikrobus_logWrite(" --- System init --- ", _LOG_LINE);
    Delay_ms( 100 );
}

void applicationInit()
{
    angle4_spiDriverInit( (T_ANGLE4_P)&_MIKROBUS1_GPIO, (T_ANGLE4_P)&_MIKROBUS1_SPI );
    
    angle4_writeByte(_ANGLE4_REG_CUSTOMER_CFG_0, _ANGLE4_CCFG0_SELECT_UVW_MODE |
                                                 _ANGLE4_CCFG0_PWM_PERIOD_1025us |
                                                 _ANGLE4_CCFG0_ABI_270edeg |
                                                 _ANGLE4_CCFG0_UVW_POLE_PAIRS_8 );
                                                 
    angle4_writeByte(_ANGLE4_REG_CUSTOMER_CFG_1, _ANGLE4_CCFG1_ABI_CPR_4096 |
                                                 _ANGLE4_CCFG1_HYSTERESIS_1_4mdeg );

    angle4_writeByte(_ANGLE4_REG_OPERATING_VOLTAGE, _ANGLE4_OPERATING_VOLTAGE_5000mV );
    
    angle4_calibration(_ANGLE4_CCFG2_DIR_COUNTER_CLOCKWISE_ROTATION, _ANGLE4_CCFG2_ABS_RESOLUTION_14bit);
    mikrobus_logWrite(" --- Start measurement ", _LOG_LINE);

    angle4_startMesuremenet();
}

void applicationTask()
{
    angle4_getNewAngle(&Angle);
    
    IntToStr(Angle, demoText);
    mikrobus_logWrite(" Angle : ", _LOG_TEXT);
    mikrobus_logWrite(demoText, _LOG_TEXT );
    mikrobus_logWrite(" deg", _LOG_LINE);
    Delay_ms( 200 );
}

void main()
{
    systemInit();
    applicationInit();

    while (1)
    {
            applicationTask();
    }
}