#line 1 "C:/Users/katarina.perendic/Desktop/Angle_4_Click/example/c/ARM/STM/Click_Angle4_STM.c"
#line 1 "c:/users/katarina.perendic/desktop/angle_4_click/example/c/arm/stm/click_angle4_types.h"
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
#line 1 "c:/users/katarina.perendic/desktop/angle_4_click/example/c/arm/stm/click_angle4_config.h"
#line 1 "c:/users/katarina.perendic/desktop/angle_4_click/example/c/arm/stm/click_angle4_types.h"
#line 3 "c:/users/katarina.perendic/desktop/angle_4_click/example/c/arm/stm/click_angle4_config.h"
const uint32_t _ANGLE4_SPI_CFG[ 2 ] =
{
 _SPI_FPCLK_DIV256,
 _SPI_SECOND_CLK_EDGE_TRANSITION |
 _SPI_CLK_IDLE_HIGH |
 _SPI_MASTER |
 _SPI_MSB_FIRST |
 _SPI_8_BIT |
 _SPI_SSM_ENABLE |
 _SPI_SS_DISABLE |
 _SPI_SSI_1
};
#line 1 "c:/users/katarina.perendic/desktop/angle_4_click/library/__angle4_driver.h"
#line 1 "c:/users/public/documents/mikroelektronika/mikroc pro for arm/include/stdint.h"
#line 59 "c:/users/katarina.perendic/desktop/angle_4_click/library/__angle4_driver.h"
extern const uint8_t _ANGLE4_REG_CUSTOMER_CFG_0 ;
extern const uint8_t _ANGLE4_REG_CUSTOMER_CFG_1 ;
extern const uint8_t _ANGLE4_REG_CUSTOMER_CFG_2 ;
extern const uint8_t _ANGLE4_REG_OPERATING_VOLTAGE ;
extern const uint8_t _ANGLE4_REG_UNLOCK_REGISTER ;
extern const uint8_t _ANGLE4_REG_CUSTOMER_RESERVED_OTP ;
extern const uint8_t _ANGLE4_REG_ST_ZERO_RESET_OTP ;
extern const uint8_t _ANGLE4_REG_CUSTOMER_CONFIG_OTP ;
extern const uint8_t _ANGLE4_REG_PROGRAM_OPERATING_VOLTAGE ;
extern const uint8_t _ANGLE4_REG_CONFIG_OF_FULL_CALIBRATION_OTP;


extern const uint8_t _ANGLE4_CCFG0_SELECT_UVW_MODE;
extern const uint8_t _ANGLE4_CCFG0_SELECT_PWM_MODE;
extern const uint8_t _ANGLE4_CCFG0_PWM_PERIOD_8193us;
extern const uint8_t _ANGLE4_CCFG0_PWM_PERIOD_4097us;
extern const uint8_t _ANGLE4_CCFG0_PWM_PERIOD_2049us;
extern const uint8_t _ANGLE4_CCFG0_PWM_PERIOD_1025us;
extern const uint8_t _ANGLE4_CCFG0_ABI_360edeg ;
extern const uint8_t _ANGLE4_CCFG0_ABI_270edeg ;
extern const uint8_t _ANGLE4_CCFG0_ABI_180edeg ;
extern const uint8_t _ANGLE4_CCFG0_ABI_90edeg ;
extern const uint8_t _ANGLE4_CCFG0_UVW_POLE_PAIRS_8 ;
extern const uint8_t _ANGLE4_CCFG0_UVW_POLE_PAIRS_7 ;
extern const uint8_t _ANGLE4_CCFG0_UVW_POLE_PAIRS_6 ;
extern const uint8_t _ANGLE4_CCFG0_UVW_POLE_PAIRS_5 ;
extern const uint8_t _ANGLE4_CCFG0_UVW_POLE_PAIRS_4 ;
extern const uint8_t _ANGLE4_CCFG0_UVW_POLE_PAIRS_3 ;
extern const uint8_t _ANGLE4_CCFG0_UVW_POLE_PAIRS_2 ;
extern const uint8_t _ANGLE4_CCFG0_UVW_POLE_PAIRS_1 ;


extern const uint8_t _ANGLE4_CCFG1_ABI_CPR_4096 ;
extern const uint8_t _ANGLE4_CCFG1_ABI_CPR_2048 ;
extern const uint8_t _ANGLE4_CCFG1_ABI_CPR_1024 ;
extern const uint8_t _ANGLE4_CCFG1_ABI_CPR_512 ;
extern const uint8_t _ANGLE4_CCFG1_ABI_CPR_256 ;
extern const uint8_t _ANGLE4_CCFG1_ABI_CPR_128 ;
extern const uint8_t _ANGLE4_CCFG1_ABI_CPR_64 ;
extern const uint8_t _ANGLE4_CCFG1_ABI_CPR_32 ;
extern const uint8_t _ANGLE4_CCFG1_HYSTERESIS_1_4mdeg ;
extern const uint8_t _ANGLE4_CCFG1_HYSTERESIS_0_7mdeg ;
extern const uint8_t _ANGLE4_CCFG1_HYSTERESIS_0_35mdeg ;
extern const uint8_t _ANGLE4_CCFG1_HYSTERESIS_0_17mdeg ;
extern const uint8_t _ANGLE4_CCFG1_HYSTERESIS_0_08mdeg ;
extern const uint8_t _ANGLE4_CCFG1_HYSTERESIS_0_04mdeg ;
extern const uint8_t _ANGLE4_CCFG1_HYSTERESIS_0_02mdeg ;
extern const uint8_t _ANGLE4_CCFG1_HYSTERESIS_0_01mdeg ;
extern const uint8_t _ANGLE4_CCFG1_HYSTERESIS_0_005mdeg;
extern const uint8_t _ANGLE4_CCFG1_NO_HYSTERESIS ;


extern const uint8_t _ANGLE4_CCFG2_DIR_COUNTER_CLOCKWISE_ROTATION;
extern const uint8_t _ANGLE4_CCFG2_DIR_CLOCKWISE_ROTATION ;
extern const uint8_t _ANGLE4_CCFG2_ZERO_LATENCY_MODE_ON ;
extern const uint8_t _ANGLE4_CCFG2_ZERO_LATENCY_MODE_OFF ;
extern const uint8_t _ANGLE4_CCFG2_ABS_RESOLUTION_10bit ;
extern const uint8_t _ANGLE4_CCFG2_ABS_RESOLUTION_12bit ;
extern const uint8_t _ANGLE4_CCFG2_ABS_RESOLUTION_14bit ;
extern const uint8_t _ANGLE4_CCFG2_ABS_RESOLUTION_16bit ;
extern const uint8_t _ANGLE4_CCFG2_SETTINGS_CPR_4096 ;
extern const uint8_t _ANGLE4_CCFG2_SETTINGS_CPR_2048 ;
extern const uint8_t _ANGLE4_CCFG2_SETTINGS_CPR_1024 ;
extern const uint8_t _ANGLE4_CCFG2_SETTINGS_CPR_512 ;
extern const uint8_t _ANGLE4_CCFG2_SETTINGS_CPR_256 ;
extern const uint8_t _ANGLE4_CCFG2_SETTINGS_CPR_128 ;
extern const uint8_t _ANGLE4_CCFG2_SETTINGS_CPR_64 ;
extern const uint8_t _ANGLE4_CCFG2_SETTINGS_CPR_32 ;
extern const uint8_t _ANGLE4_CCFG2_CPR_ABS_RESOLUTION ;


extern const uint8_t _ANGLE4_OPERATING_VOLTAGE_3300mV;
extern const uint8_t _ANGLE4_OPERATING_VOLTAGE_5000mV;


extern const uint8_t _ANGLE4_DATA_RESOLUTION_14bit;
extern const uint8_t _ANGLE4_DATA_RESOLUTION_16bit;
extern const uint8_t _ANGLE4_DATA_RESOLUTION_12bit;
extern const uint8_t _ANGLE4_DATA_RESOLUTION_10bit;
#line 148 "c:/users/katarina.perendic/desktop/angle_4_click/library/__angle4_driver.h"
void angle4_spiDriverInit( const uint8_t*  gpioObj,  const uint8_t*  spiObj);
#line 158 "c:/users/katarina.perendic/desktop/angle_4_click/library/__angle4_driver.h"
void angle4_gpioDriverInit( const uint8_t*  gpioObj);
#line 168 "c:/users/katarina.perendic/desktop/angle_4_click/library/__angle4_driver.h"
void angle4_writeByte(uint8_t addr, uint8_t _data);
#line 176 "c:/users/katarina.perendic/desktop/angle_4_click/library/__angle4_driver.h"
uint8_t angle4_readByte( uint8_t addr );
#line 181 "c:/users/katarina.perendic/desktop/angle_4_click/library/__angle4_driver.h"
void startMesuremenet();
#line 198 "c:/users/katarina.perendic/desktop/angle_4_click/library/__angle4_driver.h"
uint8_t angle4_getNewAngle(uint16_t *dataOut);
#line 206 "c:/users/katarina.perendic/desktop/angle_4_click/library/__angle4_driver.h"
void angle4_calibration(uint8_t dir, uint8_t data_resolution);
#line 30 "C:/Users/katarina.perendic/Desktop/Angle_4_Click/example/c/ARM/STM/Click_Angle4_STM.c"
uint16_t Angle;
char demoText[ 30 ] = {0};

void systemInit()
{
 mikrobus_gpioInit( _MIKROBUS1, _MIKROBUS_CS_PIN, _GPIO_OUTPUT );
 mikrobus_spiInit( _MIKROBUS1, &_ANGLE4_SPI_CFG[0] );
 mikrobus_logInit( _LOG_USBUART_A, 115200 );
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
