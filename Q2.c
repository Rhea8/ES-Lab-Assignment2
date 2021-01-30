#include<lpc214x.h>

void delay (int);

void delay (int i)
{
  T0TCR=0x02;
  T0TCR=0x01;
  while (T0TC < i);
  T0TCR=0x00;
}
int main()
{
  PINSEL0=0x00;
  IODIR0=0xFFFFFFFF;
	
  PLL0CON = 0x01;
  PLL0CFG = 0x24;
  PLL0FEED = 0xAA;
  PLL0FEED = 0x55;
  while(!(PLL0STAT & 0x00000400));
  PLL0CON = 0x03;
  PLL0FEED = 0xAA;
  PLL0FEED = 0x55;
  VPBDIV = 0x01; 

  T0CTCR=0x00;
  T0PR=59999;
  T0TCR=0x02;	 
  while(1)
	{
	   IOSET0 =(1<<0);      
        delay(1000);
        IOCLR0 =(1<<0);      
        delay(1000);

        IOSET0 =(1<<1);      
        delay(1000);
        IOCLR0 =(1<<1);      
        delay(1000);

        IOSET0=(1<<2);      
        delay(1000);
        IOCLR0 =(1<<2);      
        delay(1000);

       IOSET0=(1<<3);    
        delay(1000);
        IOCLR0=(1<<3);      
        delay(1000);

		IOSET0=(1<<4);      
        delay(1000);
        IOCLR0 =(1<<4);      
        delay(1000);
			
		IOSET0 =(1<<5);      
        delay(1000);
        IOCLR0 =(1<<5);      
        delay(1000);

	    IOSET0 =(1<<6);      
        delay(1000);
        IOCLR0 =(1<<6);      
        delay(1000);

	   IOSET0 =(1<<7);      
        delay(1000);
        IOCLR0 =(1<<7);      
        delay(1000);
			
			return 0;
	}
}