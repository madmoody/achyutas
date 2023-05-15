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
ST = 0;                          // initialise the start
ALE = 0;                         // initialise the Adress latch enable
OE = 0;                          // output enalble initialise 
EOC = 1;                         // set End of conversation
ADC_port2 = 0xFF;                //set the port
}

int ADC_read()
{
<<<<<<< HEAD
int adcdata;
ADC_A = 0x00;
=======
int data;
ADC_A = 0x00;                    //set miltiplexer
>>>>>>> created
ADC_B = 0x00;
ADC_C = 0x00;

ALE = 1;                         //enable lactch
delay(50);                       // 10pf give 50ms time for one cycle
ST = 1;                          //start bit 
delay(25);                         

ALE = 0;                       
delay(50);
ST = 0;

while(EOC == 0);                 //check falling edge overflag

OE  =1;                          //o/p enable i/p
delay(25);
<<<<<<< HEAD
adcdata = ADC_port2;
OE = 0;
return adcdata;
=======
data = ADC_port2;              //store the value
OE = 0;              
>>>>>>> created
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
