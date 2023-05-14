#incldue<reg51>
void 	UART_init(int data)
{
	SCON = 0x50;
	TMOD = 0x20;
	TH1 = 256 - (11059200UL/(long)(32*12*data);
	TR1 = 1;
}
void uart_tx(char data)
{
	SBUF = data;
	while(TI == 0);
		TI = 0;
}
char uart_rx()
{
while(RI == 0)
	RI =0;
return(SBUF);
}
int main()
{
	UART_init(9600);
	char a[] = "Hello Hydrabad",ch;
	int i ;
	for(int i = 0;a[i] != 0;i++)
	{
		uart_tx(a[i]);
	}
	while(1)
	{
	ch = uart_rx()
	uart_tx(ch);
}
	}