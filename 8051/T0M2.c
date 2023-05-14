#include<reg51.h>
sbit led = P1^0;
int delay()
{
	TMOD  = 0x02;                         // mode 2 for timer 0
	TH0 = 0xA2;                            //set value to the timer
	TR0 = 1;                                // start timer
	while(TF0 == 0);                          //check flag
	TR0 = 0;                                   //stop timer
	TF = 0;                                  // clear flag
}
int main()
{
	while(1)
	{
		led =~led;                            //toggle
		delay();                                 //calll func
	}
}