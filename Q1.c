#include<lpc214x.h>
 
void delay()
{
    unsigned int i;
    for(i=0;i<100000;i++);
}


int main()
{
    IO0DIR |=0Xffffffff;              //Port 0 is now acting as a output pin
    while(1) {
        IOSET0 =(1<<0);      
        delay();
        IOCLR0 =(1<<0);      
        delay();

        IOSET0 =(1<<1);      
        delay();
        IOCLR0 =(1<<1);      
        delay();

        IOSET0=(1<<2);      
        delay();
        IOCLR0 =(1<<2);      
        delay();

       IOSET0=(1<<3);    
        delay();
        IOCLR0=(1<<3);      
        delay();

		IOSET0=(1<<4);      
        delay();
        IOCLR0 =(1<<4);      
        delay();
			
		IOSET0 =(1<<5);      
        delay();
        IOCLR0 =(1<<5);      
        delay();

	    IOSET0 =(1<<6);      
        delay();
        IOCLR0 =(1<<6);      
        delay();

	   IOSET0 =(1<<7);      
        delay();
        IOCLR0 =(1<<7);      
        delay();
			
			return 0;    
    }   
}    