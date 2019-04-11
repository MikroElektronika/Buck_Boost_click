![MikroE](http://www.mikroe.com/img/designs/beta/logo_small.png)

---

# Buck_Boost Click

- **CIC Prefix**  : BUCKBOOST
- **Author**      : Nenad Filipovic
- **Verison**     : 1.0.0
- **Date**        : Dec 2018.

---


### Software Support

We provide a library for the Buck_Boost Click on our [LibStock](https://libstock.mikroe.com/projects/view/2216/buck-boost-click) 
page, as well as a demo application (example), developed using MikroElektronika 
[compilers](http://shop.mikroe.com/compilers). The demo can run on all the main 
MikroElektronika [development boards](http://shop.mikroe.com/development-boards).

**Library Description**

The library covers all the necessary functions to control Buck Boost Click board.
This library contains drivers for set the output value of 
2500 mV, 3300 mV, 4100 mV, 5000 mV, 6900 mV, 8200 mV, 12000 mV and 15000 mV 
to the converter LTC3129-1 on Buck Boost Click.

Key functions :

- ``` void buckboost_defaultConfig() ``` - Set default configuration function
- ``` void buckboost_set2500mV() ``` - Set the output voltage of 2500 mV function
- ``` void buckboost_set15000mV() ``` - Set the output voltage of 15000 mV function

**Examples Description**

The application is composed of three sections :

- System Initialization - Initializes GPIO and AN, RST, CS, PWM and INT pins as output.
- Application Initialization - Initialization driver enable's - GPIO,
     set default configuration and start write log.
- Application Task - (code snippet) This is a example which demonstrates the use of Buck Boost Click board.
     Change output voltage from 2500 mV to 15000 mV every 5 seconds.
     All data logs write on usb uart for aproximetly every 5 sec.


```.c

void applicationTask()
{
    mikrobus_logWrite( " Set Output Voltage of  2500 mV ", _LOG_LINE );
    mikrobus_logWrite( "--------------------------------", _LOG_LINE );
    buckboost_set2500mV();
    Delay_ms( 5000 );
    
    mikrobus_logWrite( " Set Output Voltage of  3300 mV ", _LOG_LINE );
    mikrobus_logWrite( "--------------------------------", _LOG_LINE );
    buckboost_set3300mV();
    Delay_ms( 5000 );
    
    mikrobus_logWrite( " Set Output Voltage of  4100 mV ", _LOG_LINE );
    mikrobus_logWrite( "--------------------------------", _LOG_LINE );
    buckboost_set4100mV();
    Delay_ms( 5000 );
    
    mikrobus_logWrite( " Set Output Voltage of  5000 mV ", _LOG_LINE );
    mikrobus_logWrite( "--------------------------------", _LOG_LINE );
    buckboost_set5000mV();
    Delay_ms( 5000 );
    
    mikrobus_logWrite( " Set Output Voltage of  6900 mV ", _LOG_LINE );
    mikrobus_logWrite( "--------------------------------", _LOG_LINE );
    buckboost_set6900mV();
    Delay_ms( 5000 );
    
    mikrobus_logWrite( " Set Output Voltage of  8200 mV ", _LOG_LINE );
    mikrobus_logWrite( "--------------------------------", _LOG_LINE );
    buckboost_set8200mV();
    Delay_ms( 5000 );

    mikrobus_logWrite( " Set Output Voltage of 12000 mV ", _LOG_LINE );
    mikrobus_logWrite( "--------------------------------", _LOG_LINE );
    buckboost_set12000mV();
    Delay_ms( 5000 );
    
    mikrobus_logWrite( " Set Output Voltage of 15000 mV ", _LOG_LINE );
    mikrobus_logWrite( "--------------------------------", _LOG_LINE );
    buckboost_set15000mV();
    Delay_ms( 5000 );
}

```

The full application code, and ready to use projects can be found on our 
[LibStock](https://libstock.mikroe.com/projects/view/2216/buck-boost-click) page.

Other mikroE Libraries used in the example:

- GPIO


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
