![MikroE](http://www.mikroe.com/img/designs/beta/logo_small.png)

---

# Angle4 Click

- **CIC Prefix**  : ANGLE4
- **Author**      : Katarina Perendic
- **Verison**     : 1.0.0
- **Date**        : jul 2018.

---

### Software Support

We provide a library for the Angle4 Click on our [LibStock](https://libstock.mikroe.com/projects/view/2491/angle-4-click) 
page, as well as a demo application (example), developed using MikroElektronika 
[compilers](http://shop.mikroe.com/compilers). The demo can run on all the main 
MikroElektronika [development boards](http://shop.mikroe.com/development-boards).

**Library Description**

Library initializes and defines SPI bus driver and driver functions which offer a choice to write data in registers and to read data from registers.
Library also offers a choice to sets absolute resolution read data and sets direction. 
User has an angle-reading function, a function for starting the measurement, and starting the chip calibration that is necessary for operation.

Key functions :

- ``` uint8_t angle4_getNewAngle(uint16_t *dataOut) ``` - Functions for read Angle
- ``` void angle4_startMesuremenet() ``` - Functions for start measurement
- ``` void angle4_calibration(uint8_t dir, uint8_t data_resolution) ``` - Functions for calibration chip

**Examples Description**

The application is composed of three sections :

- System Initialization - Intializes SPI module and set CS pin as OUTPUT
- Application Initialization - Driver intialization, standard configurations and start measurement
- Application Task - (code snippet) -  Reads Angle in degreeses and logs data to USBUART every 200 ms.

```.c
void applicationTask()
{
    angle4_getNewAngle(&Angle);
    
    IntToStr(Angle, demoText);
    mikrobus_logWrite(" Angle : ", _LOG_TEXT);
    mikrobus_logWrite(demoText, _LOG_TEXT );
    mikrobus_logWrite(" deg", _LOG_LINE);
    Delay_ms( 200 );
}
```

The full application code, and ready to use projects can be found on our 
[LibStock](https://libstock.mikroe.com/projects/view/2491/angle-4-click) page.

Other mikroE Libraries used in the example:

- SPI
- Conversions

**Additional notes and informations**

Depending on the development board you are using, you may need 
[USB UART click](http://shop.mikroe.com/usb-uart-click), 
[USB UART 2 Click](http://shop.mikroe.com/usb-uart-2-click) or 
[RS232 Click](http://shop.mikroe.com/rs232-click) to connect to your PC, for 
development systems with no UART to USB interface available on the board. The 
terminal available in all Mikroelektronika 
[compilers](http://shop.mikroe.com/compilers), or any other terminal application 
of your choice, can be used to read the message.

---
---
