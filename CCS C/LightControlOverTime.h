#include <16F877A.h>
#device ADC=10
#use delay(crystal=200000000)

#fuses HS,NOWDT,PUT,NOPROTECT


#define LCD_ENABLE_PIN  PIN_B2
#define LCD_RS_PIN      PIN_B0
#define LCD_RW_PIN      PIN_B1
#define LCD_DATA4       PIN_B3
#define LCD_DATA5       PIN_B4
#define LCD_DATA6       PIN_B5
#define LCD_DATA7       PIN_B6

#define RTC_SCLK PIN_D6
#define RTC_IO   PIN_D7
#define RTC_RST  PIN_D5

#define LED(x) output_bit(PIN_B7,x)

#define Button_Up() input(PIN_D0)
#define Button_Down() input(PIN_D1)
#define Button_Change() input(PIN_D2)


#include <LCD.C>
#include <DS1302.c>

