#include <stdio.h>
#include <irq.h>
#include <uart.h>

int main()
{
	irq_setmask(0);
	irq_setie(1);
	uart_init();
	printf("Hello World\n");
	while(1);
	return 0;
}

