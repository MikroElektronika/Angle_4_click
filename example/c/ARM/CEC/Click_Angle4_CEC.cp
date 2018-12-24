#line 1 "C:/Users/katarina.perendic/Desktop/Angle_4_Click/example/c/ARM/CEC/Click_Angle4_CEC.c"
#line 1 "c:/users/katarina.perendic/desktop/angle_4_click/example/c/arm/cec/click_angle4_types.h"
#line 1 "c:/users/public/documents/mikroelektronika/mikroc pro for arm/include/stdint.h"





typedef signed char int8_t;
typedef signed int int16_t;
typedef signed long int int32_t;
typedef signed long long int64_t;


typedef unsigned char uint8_t;
typedef unsigned int uint16_t;
typedef unsigned long int uint32_t;
typedef unsigned long long uint64_t;


typedef signed char int_least8_t;
typedef signed int int_least16_t;
typedef signed long int int_least32_t;
typedef signed long long int_least64_t;


typedef unsigned char uint_least8_t;
typedef unsigned int uint_least16_t;
typedef unsigned long int uint_least32_t;
typedef unsigned long long uint_least64_t;



typedef signed long int int_fast8_t;
typedef signed long int int_fast16_t;
typedef signed long int int_fast32_t;
typedef signed long long int_fast64_t;


typedef unsigned long int uint_fast8_t;
typedef unsigned long int uint_fast16_t;
typedef unsigned long int uint_fast32_t;
typedef unsigned long long uint_fast64_t;


typedef signed long int intptr_t;
typedef unsigned long int uintptr_t;


typedef signed long long intmax_t;
typedef unsigned long long uintmax_t;
#line 1 "c:/users/katarina.perendic/desktop/angle_4_click/example/c/arm/cec/click_angle4_config.h"
#line 1 "c:/users/katarina.perendic/desktop/angle_4_click/example/c/arm/cec/click_angle4_types.h"
#line 3 "c:/users/katarina.perendic/desktop/angle_4_click/example/c/arm/cec/click_angle4_config.h"
const uint32_t _ANGLE4_SPI_CFG[ 3 ] =
{
 1000000,
 _SPI_MSB_FIRST,
 _SPI_CLK_IDLE_HIGH |
 _SPI_SAMPLE_DATA_RISING_EDGE
};
#line 28 "C:/Users/katarina.perendic/Desktop/Angle_4_Click/example/c/ARM/CEC/Click_Angle4_CEC.c"
uint16_t Angle;
char demoText[ 30 ] = {0};

void systemInit()
{
 mikrobus_gpioInit( _MIKROBUS1, _MIKROBUS_CS_PIN, _GPIO_OUTPUT );
 mikrobus_spiInit( _MIKROBUS1, &_ANGLE4_SPI_CFG[0] );
 mikrobus_logInit( _MIKROBUS2, 115200 );
 mikrobus_logWrite(" --- System init --- ", _LOG_LINE);
 Delay_ms( 100 );
}

void applicationInit()
{
 angle4_spiDriverInit( ( const uint8_t* )&_MIKROBUS1_GPIO, ( const uint8_t* )&_MIKROBUS1_SPI );

 angle4_writeByte(_ANGLE4_REG_CUSTOMER_CFG_0, _ANGLE4_CCFG0_SELECT_UVW_MODE |
 _ANGLE4_CCFG0_PWM_PERIOD_1025us |
 _ANGLE4_CCFG0_ABI_270edeg |
 _ANGLE4_CCFG0_UVW_POLE_PAIRS_8 );

 angle4_writeByte(_ANGLE4_REG_CUSTOMER_CFG_1, _ANGLE4_CCFG1_ABI_CPR_4096 |
 _ANGLE4_CCFG1_HYSTERESIS_1_4mdeg );

 angle4_writeByte(_ANGLE4_REG_OPERATING_VOLTAGE, _ANGLE4_OPERATING_VOLTAGE_5000mV );

 angle4_calibration(_ANGLE4_CCFG2_DIR_COUNTER_CLOCKWISE_ROTATION, _ANGLE4_CCFG2_ABS_RESOLUTION_14bit);
 mikrobus_logWrite(" --- Start measurement ", _LOG_LINE);

 startMesuremenet();
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
