#include<reg52>

sbit rw = P1^0;
sbit rs = P1^1;
sbit en = P1^2;

sbit ADC_prot2 =  P2;
sbit LCD_ port0 = P0;

sbit ADC_A = P3^0;           //make enable before start  
sbit ADC_B = P3^1;            //start the conversion  low to high rising edge
sbit ADC_c = P3^2;        //gives status about data high on falling edge
sbit ALE = P3^3;
sbit ST = P3^4;
sbit EOC = P3^5;
sbit OE = P3^6;


void delay(time)
{
for(int i = 0;i<time;i++);
}
Lcd_print(unsigned char data)
{
	LCD_port0 = data;
	rw = 0;
	rs = 1;
	en = 1;
	delay(1);                                                                       en = 0;                                                                 }
void lcd_cmd()
{
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
int data;
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
data = ADC_port2;
OE = 0;
}
int main()
{
int value;
char temp[100];
lcd_init();
ADC_init();
lcd_print(1,4,"Temperature : ");
while(1)
{
	value = ADC_read();

sprintf(temp,".2%f",value);
lcd_print(temp);
}
}


