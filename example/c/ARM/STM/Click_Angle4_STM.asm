_systemInit:
;Click_Angle4_STM.c,33 :: 		void systemInit()
SUB	SP, SP, #4
STR	LR, [SP, #0]
;Click_Angle4_STM.c,35 :: 		mikrobus_gpioInit( _MIKROBUS1, _MIKROBUS_CS_PIN, _GPIO_OUTPUT );
MOVS	R2, #0
MOVS	R1, #2
MOVS	R0, #0
BL	_mikrobus_gpioInit+0
;Click_Angle4_STM.c,36 :: 		mikrobus_spiInit( _MIKROBUS1, &_ANGLE4_SPI_CFG[0] );
MOVW	R0, #lo_addr(__ANGLE4_SPI_CFG+0)
MOVT	R0, #hi_addr(__ANGLE4_SPI_CFG+0)
MOV	R1, R0
MOVS	R0, #0
BL	_mikrobus_spiInit+0
;Click_Angle4_STM.c,37 :: 		mikrobus_logInit( _LOG_USBUART_A, 115200 );
MOV	R1, #115200
MOVS	R0, #32
BL	_mikrobus_logInit+0
;Click_Angle4_STM.c,38 :: 		mikrobus_logWrite(" --- System init --- ", _LOG_LINE);
MOVW	R0, #lo_addr(?lstr1_Click_Angle4_STM+0)
MOVT	R0, #hi_addr(?lstr1_Click_Angle4_STM+0)
MOVS	R1, #2
BL	_mikrobus_logWrite+0
;Click_Angle4_STM.c,39 :: 		Delay_ms( 100 );
MOVW	R7, #20351
MOVT	R7, #18
NOP
NOP
L_systemInit0:
SUBS	R7, R7, #1
BNE	L_systemInit0
NOP
NOP
NOP
;Click_Angle4_STM.c,40 :: 		}
L_end_systemInit:
LDR	LR, [SP, #0]
ADD	SP, SP, #4
BX	LR
; end of _systemInit
_applicationInit:
;Click_Angle4_STM.c,42 :: 		void applicationInit()
SUB	SP, SP, #4
STR	LR, [SP, #0]
;Click_Angle4_STM.c,44 :: 		angle4_spiDriverInit( (T_ANGLE4_P)&_MIKROBUS1_GPIO, (T_ANGLE4_P)&_MIKROBUS1_SPI );
MOVW	R1, #lo_addr(__MIKROBUS1_SPI+0)
MOVT	R1, #hi_addr(__MIKROBUS1_SPI+0)
MOVW	R0, #lo_addr(__MIKROBUS1_GPIO+0)
MOVT	R0, #hi_addr(__MIKROBUS1_GPIO+0)
BL	_angle4_spiDriverInit+0
;Click_Angle4_STM.c,47 :: 		_ANGLE4_CCFG0_PWM_PERIOD_1025us |
MOVS	R0, __ANGLE4_CCFG0_SELECT_UVW_MODE
ORR	R0, R0, __ANGLE4_CCFG0_PWM_PERIOD_1025us
UXTB	R0, R0
;Click_Angle4_STM.c,48 :: 		_ANGLE4_CCFG0_ABI_270edeg |
ORR	R0, R0, __ANGLE4_CCFG0_ABI_270edeg
UXTB	R0, R0
;Click_Angle4_STM.c,49 :: 		_ANGLE4_CCFG0_UVW_POLE_PAIRS_8 );
ORR	R0, R0, __ANGLE4_CCFG0_UVW_POLE_PAIRS_8
UXTB	R1, R0
;Click_Angle4_STM.c,46 :: 		angle4_writeByte(_ANGLE4_REG_CUSTOMER_CFG_0, _ANGLE4_CCFG0_SELECT_UVW_MODE |
MOVS	R0, __ANGLE4_REG_CUSTOMER_CFG_0
;Click_Angle4_STM.c,49 :: 		_ANGLE4_CCFG0_UVW_POLE_PAIRS_8 );
BL	_angle4_writeByte+0
;Click_Angle4_STM.c,52 :: 		_ANGLE4_CCFG1_HYSTERESIS_1_4mdeg );
MOVS	R0, __ANGLE4_CCFG1_ABI_CPR_4096
ORR	R0, R0, __ANGLE4_CCFG1_HYSTERESIS_1_4mdeg
UXTB	R1, R0
;Click_Angle4_STM.c,51 :: 		angle4_writeByte(_ANGLE4_REG_CUSTOMER_CFG_1, _ANGLE4_CCFG1_ABI_CPR_4096 |
MOVS	R0, __ANGLE4_REG_CUSTOMER_CFG_1
;Click_Angle4_STM.c,52 :: 		_ANGLE4_CCFG1_HYSTERESIS_1_4mdeg );
BL	_angle4_writeByte+0
;Click_Angle4_STM.c,54 :: 		angle4_writeByte(_ANGLE4_REG_OPERATING_VOLTAGE, _ANGLE4_OPERATING_VOLTAGE_5000mV );
MOVS	R1, __ANGLE4_OPERATING_VOLTAGE_5000mV
MOVS	R0, __ANGLE4_REG_OPERATING_VOLTAGE
BL	_angle4_writeByte+0
;Click_Angle4_STM.c,56 :: 		angle4_calibration(_ANGLE4_CCFG2_DIR_COUNTER_CLOCKWISE_ROTATION, _ANGLE4_CCFG2_ABS_RESOLUTION_14bit);
MOVS	R1, __ANGLE4_CCFG2_ABS_RESOLUTION_14bit
MOVS	R0, __ANGLE4_CCFG2_DIR_COUNTER_CLOCKWISE_ROTATION
BL	_angle4_calibration+0
;Click_Angle4_STM.c,57 :: 		mikrobus_logWrite(" --- Start measurement ", _LOG_LINE);
MOVW	R0, #lo_addr(?lstr2_Click_Angle4_STM+0)
MOVT	R0, #hi_addr(?lstr2_Click_Angle4_STM+0)
MOVS	R1, #2
BL	_mikrobus_logWrite+0
;Click_Angle4_STM.c,59 :: 		startMesuremenet();
BL	_startMesuremenet+0
;Click_Angle4_STM.c,60 :: 		}
L_end_applicationInit:
LDR	LR, [SP, #0]
ADD	SP, SP, #4
BX	LR
; end of _applicationInit
_applicationTask:
;Click_Angle4_STM.c,62 :: 		void applicationTask()
SUB	SP, SP, #4
STR	LR, [SP, #0]
;Click_Angle4_STM.c,64 :: 		angle4_getNewAngle(&Angle);
MOVW	R0, #lo_addr(_Angle+0)
MOVT	R0, #hi_addr(_Angle+0)
BL	_angle4_getNewAngle+0
;Click_Angle4_STM.c,66 :: 		IntToStr(Angle, demoText);
MOVW	R0, #lo_addr(_Angle+0)
MOVT	R0, #hi_addr(_Angle+0)
LDRH	R0, [R0, #0]
MOVW	R1, #lo_addr(_demoText+0)
MOVT	R1, #hi_addr(_demoText+0)
BL	_IntToStr+0
;Click_Angle4_STM.c,67 :: 		mikrobus_logWrite(" Angle : ", _LOG_TEXT);
MOVW	R0, #lo_addr(?lstr3_Click_Angle4_STM+0)
MOVT	R0, #hi_addr(?lstr3_Click_Angle4_STM+0)
MOVS	R1, #1
BL	_mikrobus_logWrite+0
;Click_Angle4_STM.c,68 :: 		mikrobus_logWrite(demoText, _LOG_TEXT );
MOVS	R1, #1
MOVW	R0, #lo_addr(_demoText+0)
MOVT	R0, #hi_addr(_demoText+0)
BL	_mikrobus_logWrite+0
;Click_Angle4_STM.c,69 :: 		mikrobus_logWrite(" deg", _LOG_LINE);
MOVW	R0, #lo_addr(?lstr4_Click_Angle4_STM+0)
MOVT	R0, #hi_addr(?lstr4_Click_Angle4_STM+0)
MOVS	R1, #2
BL	_mikrobus_logWrite+0
;Click_Angle4_STM.c,70 :: 		Delay_ms( 200 );
MOVW	R7, #40703
MOVT	R7, #36
NOP
NOP
L_applicationTask2:
SUBS	R7, R7, #1
BNE	L_applicationTask2
NOP
NOP
NOP
;Click_Angle4_STM.c,71 :: 		}
L_end_applicationTask:
LDR	LR, [SP, #0]
ADD	SP, SP, #4
BX	LR
; end of _applicationTask
_main:
;Click_Angle4_STM.c,73 :: 		void main()
SUB	SP, SP, #4
;Click_Angle4_STM.c,75 :: 		systemInit();
BL	_systemInit+0
;Click_Angle4_STM.c,76 :: 		applicationInit();
BL	_applicationInit+0
;Click_Angle4_STM.c,78 :: 		while (1)
L_main4:
;Click_Angle4_STM.c,80 :: 		applicationTask();
BL	_applicationTask+0
;Click_Angle4_STM.c,81 :: 		}
IT	AL
BAL	L_main4
;Click_Angle4_STM.c,82 :: 		}
L_end_main:
L__main_end_loop:
B	L__main_end_loop
; end of _main
