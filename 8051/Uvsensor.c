#include<reg51.h>
#include<stdio.h>
#incldude<math.h>
#include "lcd.h"
#define trig P2^0
#define echo P2^1

void	sensor_trig(void)
{
	 trig = 1;
	delay();
	trig = 0;
}
void delay()
{
	TL0 = 0xF5;
	TH0 = 0XFF;
	TR0 = 1;
	while(TF0 == 0);
	TR0 = 0;
	TF0 = 0;
}

int main()
{
	unsigned char distance,distance_cm[10];
double value = 1.085 * pow(10,6);
lcd_int();
	lcd_print(1,1,"Distance : ");	
	while(1)
	{
		sensor_trig();
	  timer_init(); 	
		while(echo == 0);
		TR0 = 1;
		while(echo == 0 && TF0 == 1);
			TR0 = 0;
	
		distance =  value * (TL0 | TH0 << 8);
		sprintf(distance_cm,"%.2f",distance);
		lcd_print(2,1,distance_cm);
		lcd_print(2,4,"cm");
}
	
}