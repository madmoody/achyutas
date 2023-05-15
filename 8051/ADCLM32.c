#include <reg51.h>
#include <stdio.h>

sbit rw = P1^0;
sbit rs = P1^1;
sbit en = P1^2;
sbit ADC_port2 =  P2;
sbit LCD_port0 = P0;

sbit ADC_A = P3^0;           //make enable before start  
sbit ADC_B = P3^1;            //start the conversion  low to high rising edge
sbit ADC_C = P3^2;        //gives status about data high on falling edge
sbit ALE = P3^3;
sbit ST = P3^4;
sbit EOC = P3^5;
sbit OE = P3^6;


void delay(unsigned int time)
{
	unsigned int i;
for(i = 0;i<time;i++);
}

char Lcd_print(char lcd)
{
	LCD_port0 = lcd;

	rw = 0;
	rs = 1;
	en = 1;
	delay(1);                            
	en = 0;
	return lcd;
}
//void lcd_cmd (char lcd);

void lcd_cmd(char lcd)
{
	LCD_port0 = lcd;
	rw = 0;
	rs = 0;
	en = 1;
	delay(1);
	en = 0;
}
void lcd_init()
{
  lcd_cmd(0x38); 
	delay(10);
	lcd_cmd(0x0F);
	delay(10);
	lcd_cmd(0x01);
	delay(10);
	lcd_cmd(0x81);
	delay(10);
}
void ADC_init()
{
ST = 0;
ALE = 0;
OE = 0;
EOC = 1;
ADC_port2 = 0xFF;
}
int ADC_read()
{
int adcdata;
ADC_A = 0x00;
ADC_B = 0x00;
ADC_C = 0x00;

ALE = 1;
delay(50);
ST = 1;
delay(25);

ALE = 0;
delay(50);
ST = 0;

while(EOC == 0);

OE  =1;
delay(25);
adcdata = ADC_port2;
OE = 0;
return adcdata;
}
int main()
{
int value,i = 0;
char temp[20];
lcd_init();
ADC_init();
	

value = ADC_read();
sprintf(temp,"%.2f",value);
while(temp[i] != '\0')
{
	Lcd_print(temp[i]);
	i++;
}
return 0;
}
