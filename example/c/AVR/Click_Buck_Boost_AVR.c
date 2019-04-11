/*
Example for Buck_Boost Click

    Date          : Dec 2018.
    Author        : Nenad Filipovic

Test configuration AVR :
    
    MCU              : ATMEGA32
    Dev. Board       : EasyAVR v7 
    AVR Compiler ver : v7.0.1.0

---

Description :

The application is composed of three sections :

- System Initialization - Initializes GPIO and AN, RST, CS, PWM and INT pins as output.
- Application Initialization - Initialization driver enable's - GPIO,
     set default configuration and start write log.
- Application Task - (code snippet) This is a example which demonstrates the use of Buck Boost Click board.
     Change output voltage from 2500 mV to 15000 mV every 5 seconds.
     All data logs write on usb uart for aproximetly every 5 sec.


*/

#include "Click_Buck_Boost_types.h"
#include "Click_Buck_Boost_config.h"


void systemInit()
{
    mikrobus_gpioInit( _MIKROBUS1, _MIKROBUS_AN_PIN, _GPIO_OUTPUT );
    mikrobus_gpioInit( _MIKROBUS1, _MIKROBUS_RST_PIN, _GPIO_OUTPUT );
    mikrobus_gpioInit( _MIKROBUS1, _MIKROBUS_CS_PIN, _GPIO_OUTPUT );
    mikrobus_gpioInit( _MIKROBUS1, _MIKROBUS_PWM_PIN, _GPIO_OUTPUT );
    mikrobus_gpioInit( _MIKROBUS1, _MIKROBUS_INT_PIN, _GPIO_OUTPUT );

    mikrobus_logInit( _LOG_USBUART, 9600 );

    Delay_ms( 100 );
}

void applicationInit()
{
    buckboost_gpioDriverInit( (T_BUCKBOOST_P)&_MIKROBUS1_GPIO );

    buckboost_defaultConfig();

    mikrobus_logWrite( "--------------------------------", _LOG_LINE );
    mikrobus_logWrite( "        Buck Boost Click        ", _LOG_LINE );
    mikrobus_logWrite( "--------------------------------", _LOG_LINE );

    Delay_ms( 100 );
}

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

void main()
{
    systemInit();
    applicationInit();

    while (1)
    {
    	applicationTask();
    }
}