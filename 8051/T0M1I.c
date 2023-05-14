#include<arg51.h>
sbit   LED =  P1^0;
void timer(void) interrupt 1
{
	LED =~LED;
}
int main()
{
	TMOD = 0x01;     //set mode1
	TH0 = 0x00;        //initialise loader timer
	TL0 = 0x00;
	 IE =  0x82;         //Enable interrpt
  TR0 = 1;             //start Timer
	while(1);              //polling /do nothing
}