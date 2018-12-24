
_systemInit:

;Click_Angle4_PIC.c,33 :: 		void systemInit()
;Click_Angle4_PIC.c,35 :: 		mikrobus_gpioInit( _MIKROBUS1, _MIKROBUS_CS_PIN, _GPIO_OUTPUT );
	CLRF        FARG_mikrobus_gpioInit_bus+0 
	MOVLW       2
	MOVWF       FARG_mikrobus_gpioInit_pin+0 
	CLRF        FARG_mikrobus_gpioInit_direction+0 
	CALL        _mikrobus_gpioInit+0, 0
;Click_Angle4_PIC.c,36 :: 		mikrobus_spiInit( _MIKROBUS1, &_ANGLE4_SPI_CFG[0] );
	CLRF        FARG_mikrobus_spiInit_bus+0 
	MOVLW       __ANGLE4_SPI_CFG+0
	MOVWF       FARG_mikrobus_spiInit_cfg+0 
	MOVLW       hi_addr(__ANGLE4_SPI_CFG+0)
	MOVWF       FARG_mikrobus_spiInit_cfg+1 
	MOVLW       higher_addr(__ANGLE4_SPI_CFG+0)
	MOVWF       FARG_mikrobus_spiInit_cfg+2 
	CALL        _mikrobus_spiInit+0, 0
;Click_Angle4_PIC.c,37 :: 		mikrobus_logInit( _LOG_USBUART, 115200 );
	MOVLW       16
	MOVWF       FARG_mikrobus_logInit_port+0 
	MOVLW       0
	MOVWF       FARG_mikrobus_logInit_baud+0 
	MOVLW       194
	MOVWF       FARG_mikrobus_logInit_baud+1 
	MOVLW       1
	MOVWF       FARG_mikrobus_logInit_baud+2 
	MOVLW       0
	MOVWF       FARG_mikrobus_logInit_baud+3 
	CALL        _mikrobus_logInit+0, 0
;Click_Angle4_PIC.c,38 :: 		mikrobus_logWrite(" --- System init --- ", _LOG_LINE);
	MOVLW       ?lstr1_Click_Angle4_PIC+0
	MOVWF       FARG_mikrobus_logWrite_data_+0 
	MOVLW       hi_addr(?lstr1_Click_Angle4_PIC+0)
	MOVWF       FARG_mikrobus_logWrite_data_+1 
	MOVLW       2
	MOVWF       FARG_mikrobus_logWrite_format+0 
	CALL        _mikrobus_logWrite+0, 0
;Click_Angle4_PIC.c,39 :: 		Delay_ms( 100 );
	MOVLW       9
	MOVWF       R11, 0
	MOVLW       30
	MOVWF       R12, 0
	MOVLW       228
	MOVWF       R13, 0
L_systemInit0:
	DECFSZ      R13, 1, 1
	BRA         L_systemInit0
	DECFSZ      R12, 1, 1
	BRA         L_systemInit0
	DECFSZ      R11, 1, 1
	BRA         L_systemInit0
	NOP
;Click_Angle4_PIC.c,40 :: 		}
L_end_systemInit:
	RETURN      0
; end of _systemInit

_applicationInit:

;Click_Angle4_PIC.c,42 :: 		void applicationInit()
;Click_Angle4_PIC.c,44 :: 		angle4_spiDriverInit( (T_ANGLE4_P)&_MIKROBUS1_GPIO, (T_ANGLE4_P)&_MIKROBUS1_SPI );
	MOVLW       __MIKROBUS1_GPIO+0
	MOVWF       FARG_angle4_spiDriverInit_gpioObj+0 
	MOVLW       hi_addr(__MIKROBUS1_GPIO+0)
	MOVWF       FARG_angle4_spiDriverInit_gpioObj+1 
	MOVLW       higher_addr(__MIKROBUS1_GPIO+0)
	MOVWF       FARG_angle4_spiDriverInit_gpioObj+2 
	MOVLW       __MIKROBUS1_SPI+0
	MOVWF       FARG_angle4_spiDriverInit_spiObj+0 
	MOVLW       hi_addr(__MIKROBUS1_SPI+0)
	MOVWF       FARG_angle4_spiDriverInit_spiObj+1 
	MOVLW       higher_addr(__MIKROBUS1_SPI+0)
	MOVWF       FARG_angle4_spiDriverInit_spiObj+2 
	CALL        _angle4_spiDriverInit+0, 0
;Click_Angle4_PIC.c,46 :: 		angle4_writeByte(_ANGLE4_REG_CUSTOMER_CFG_0, _ANGLE4_CCFG0_SELECT_UVW_MODE |
	MOVLW       __ANGLE4_REG_CUSTOMER_CFG_0
	MOVWF       FARG_angle4_writeByte_addr+0 
;Click_Angle4_PIC.c,47 :: 		_ANGLE4_CCFG0_PWM_PERIOD_1025us |
	MOVLW       __ANGLE4_CCFG0_SELECT_UVW_MODE
	MOVWF       R0 
	MOVLW       __ANGLE4_CCFG0_PWM_PERIOD_1025us
	IORWF       R0, 0 
	MOVWF       FARG_angle4_writeByte__data+0 
;Click_Angle4_PIC.c,48 :: 		_ANGLE4_CCFG0_ABI_270edeg |
	MOVLW       __ANGLE4_CCFG0_ABI_270edeg
	IORWF       FARG_angle4_writeByte__data+0, 1 
;Click_Angle4_PIC.c,49 :: 		_ANGLE4_CCFG0_UVW_POLE_PAIRS_8 );
	MOVLW       __ANGLE4_CCFG0_UVW_POLE_PAIRS_8
	IORWF       FARG_angle4_writeByte__data+0, 1 
	CALL        _angle4_writeByte+0, 0
;Click_Angle4_PIC.c,51 :: 		angle4_writeByte(_ANGLE4_REG_CUSTOMER_CFG_1, _ANGLE4_CCFG1_ABI_CPR_4096 |
	MOVLW       __ANGLE4_REG_CUSTOMER_CFG_1
	MOVWF       FARG_angle4_writeByte_addr+0 
;Click_Angle4_PIC.c,52 :: 		_ANGLE4_CCFG1_HYSTERESIS_1_4mdeg );
	MOVLW       __ANGLE4_CCFG1_ABI_CPR_4096
	MOVWF       R0 
	MOVLW       __ANGLE4_CCFG1_HYSTERESIS_1_4mdeg
	IORWF       R0, 0 
	MOVWF       FARG_angle4_writeByte__data+0 
	CALL        _angle4_writeByte+0, 0
;Click_Angle4_PIC.c,54 :: 		angle4_writeByte(_ANGLE4_REG_OPERATING_VOLTAGE, _ANGLE4_OPERATING_VOLTAGE_5000mV );
	MOVLW       __ANGLE4_REG_OPERATING_VOLTAGE
	MOVWF       FARG_angle4_writeByte_addr+0 
	MOVLW       __ANGLE4_OPERATING_VOLTAGE_5000mV
	MOVWF       FARG_angle4_writeByte__data+0 
	CALL        _angle4_writeByte+0, 0
;Click_Angle4_PIC.c,56 :: 		angle4_calibration(_ANGLE4_CCFG2_DIR_COUNTER_CLOCKWISE_ROTATION, _ANGLE4_CCFG2_ABS_RESOLUTION_14bit);
	MOVLW       __ANGLE4_CCFG2_DIR_COUNTER_CLOCKWISE_ROTATION
	MOVWF       FARG_angle4_calibration_dir+0 
	MOVLW       __ANGLE4_CCFG2_ABS_RESOLUTION_14bit
	MOVWF       FARG_angle4_calibration_data_resolution+0 
	CALL        _angle4_calibration+0, 0
;Click_Angle4_PIC.c,57 :: 		mikrobus_logWrite(" --- Start measurement ", _LOG_LINE);
	MOVLW       ?lstr2_Click_Angle4_PIC+0
	MOVWF       FARG_mikrobus_logWrite_data_+0 
	MOVLW       hi_addr(?lstr2_Click_Angle4_PIC+0)
	MOVWF       FARG_mikrobus_logWrite_data_+1 
	MOVLW       2
	MOVWF       FARG_mikrobus_logWrite_format+0 
	CALL        _mikrobus_logWrite+0, 0
;Click_Angle4_PIC.c,58 :: 		}
L_end_applicationInit:
	RETURN      0
; end of _applicationInit

_applicationTask:

;Click_Angle4_PIC.c,60 :: 		void applicationTask()
;Click_Angle4_PIC.c,62 :: 		Angle = angle4_getNewAngle();
	CALL        _angle4_getNewAngle+0, 0
	MOVF        R0, 0 
	MOVWF       _Angle+0 
	MOVF        R1, 0 
	MOVWF       _Angle+1 
;Click_Angle4_PIC.c,63 :: 		if(Angle != 0)
	MOVLW       0
	XORWF       R1, 0 
	BTFSS       STATUS+0, 2 
	GOTO        L__applicationTask8
	MOVLW       0
	XORWF       R0, 0 
L__applicationTask8:
	BTFSC       STATUS+0, 2 
	GOTO        L_applicationTask1
;Click_Angle4_PIC.c,65 :: 		IntToStr(Angle, demoText);
	MOVF        _Angle+0, 0 
	MOVWF       FARG_IntToStr_input+0 
	MOVF        _Angle+1, 0 
	MOVWF       FARG_IntToStr_input+1 
	MOVLW       _demoText+0
	MOVWF       FARG_IntToStr_output+0 
	MOVLW       hi_addr(_demoText+0)
	MOVWF       FARG_IntToStr_output+1 
	CALL        _IntToStr+0, 0
;Click_Angle4_PIC.c,66 :: 		mikrobus_logWrite(" Angle : ", _LOG_TEXT);
	MOVLW       ?lstr3_Click_Angle4_PIC+0
	MOVWF       FARG_mikrobus_logWrite_data_+0 
	MOVLW       hi_addr(?lstr3_Click_Angle4_PIC+0)
	MOVWF       FARG_mikrobus_logWrite_data_+1 
	MOVLW       1
	MOVWF       FARG_mikrobus_logWrite_format+0 
	CALL        _mikrobus_logWrite+0, 0
;Click_Angle4_PIC.c,67 :: 		mikrobus_logWrite(demoText, _LOG_TEXT );
	MOVLW       _demoText+0
	MOVWF       FARG_mikrobus_logWrite_data_+0 
	MOVLW       hi_addr(_demoText+0)
	MOVWF       FARG_mikrobus_logWrite_data_+1 
	MOVLW       1
	MOVWF       FARG_mikrobus_logWrite_format+0 
	CALL        _mikrobus_logWrite+0, 0
;Click_Angle4_PIC.c,68 :: 		mikrobus_logWrite(" deg", _LOG_LINE);
	MOVLW       ?lstr4_Click_Angle4_PIC+0
	MOVWF       FARG_mikrobus_logWrite_data_+0 
	MOVLW       hi_addr(?lstr4_Click_Angle4_PIC+0)
	MOVWF       FARG_mikrobus_logWrite_data_+1 
	MOVLW       2
	MOVWF       FARG_mikrobus_logWrite_format+0 
	CALL        _mikrobus_logWrite+0, 0
;Click_Angle4_PIC.c,69 :: 		}
L_applicationTask1:
;Click_Angle4_PIC.c,70 :: 		Delay_ms( 200 );
	MOVLW       17
	MOVWF       R11, 0
	MOVLW       60
	MOVWF       R12, 0
	MOVLW       203
	MOVWF       R13, 0
L_applicationTask2:
	DECFSZ      R13, 1, 1
	BRA         L_applicationTask2
	DECFSZ      R12, 1, 1
	BRA         L_applicationTask2
	DECFSZ      R11, 1, 1
	BRA         L_applicationTask2
;Click_Angle4_PIC.c,71 :: 		}
L_end_applicationTask:
	RETURN      0
; end of _applicationTask

_main:

;Click_Angle4_PIC.c,73 :: 		void main()
;Click_Angle4_PIC.c,75 :: 		systemInit();
	CALL        _systemInit+0, 0
;Click_Angle4_PIC.c,76 :: 		applicationInit();
	CALL        _applicationInit+0, 0
;Click_Angle4_PIC.c,78 :: 		while (1)
L_main3:
;Click_Angle4_PIC.c,80 :: 		applicationTask();
	CALL        _applicationTask+0, 0
;Click_Angle4_PIC.c,81 :: 		}
	GOTO        L_main3
;Click_Angle4_PIC.c,82 :: 		}
L_end_main:
	GOTO        $+0
; end of _main
