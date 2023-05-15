#include<reg52>

sbit rw = P1^0;
sbit rs = P1^1;
sbit en = P1^2;

sbit ADC_prot2 =  P2;
sbit LCD_ port0 = P0;

sbit ALE = P3^0;           //make enable before start  
sbit ST = P3^1;            //start the conversion  low to high rising edge
sbit EOC = P3^2;        //gives status about data high on falling edge

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
}	
int main()
{
int value;
lcd_init();

lcd_print(1,4,"Temperature : ");
ALE = 1;

while(EOC == 1);
value = ADC_port2;
sprintf(data,".2%f",value);
lcd_print(data);
}


