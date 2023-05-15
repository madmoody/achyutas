#include <reg51.h>
#include <stdio.h>
sbit LM = P1^0;
static int count = 0;
int timer(void) interrupt 1
{
while(LM == 1)
{	
    count++;
}

}

int main()
{
char  temp[100];
int i = 0;
 TMOD = 0x00;
 TH0 = 0x00;
 TL0 = 0x00;
 while(LM == 0);
 IE = 0x82;
 TR0 = 1;
 sprintf(temp,".2%f",count);
 while(temp[i] != '/0')
 {
	 Lcd_print(temp[i]);
	 i++;
 }
if(LM == 0)
{
TR0 = 0;

}
}
