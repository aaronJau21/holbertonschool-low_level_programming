#include "main.h"

/**
   * jack_bauer - print every minute of a day
    * Description: print minutes from 00:00 to 23:59
     */

void jack_bauer(void)
{
	int horas = 0;
	int minutos = 0;

	while (horas < 24)
	{
		while (minutos < 60)
		{
			_putchar('0' + (horas / 10));
			_putchar('0' + (horas % 10));
			_putchar(':');
			_putchar('0' + (minutos / 10));
			_putchar('0' + (minutos % 10));
			_putchar('\n');
			minutos++;
		}
		minutos = 0;
		horas++;
	}
}
