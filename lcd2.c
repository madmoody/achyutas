#include <reg52.h>
#define port2 P2
#define RW  P3^0
#define RS   P3^1
#define EN   P3^2
void delay(unsigned int time)
{
	unsigned i,j;
	for(i = 0;i<time;i++)
	for(j = 0;j<1275;j++);
	
}
void lcd_cmd()
{
	RW = 0;
	RS = 0;
	EN = 1;
	delay(1);
	EN = 0;
}
Lcd_print(unsigned char data)
{
	port2 = data;
	RW = 0;
	RS = 1;
	EN = 1;
	delay(1);                                                                                                                                                            
	EN = 0;                                                                                             
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

void main()
{
	unsigned char arr[10] = "Hello Hyderabad";
	int i= 0;
	lcd_init();
	while(arr[i] != '\0')
	{
		lcd_print(arr[i]);
		i++;
		delya(50);
	}
}
