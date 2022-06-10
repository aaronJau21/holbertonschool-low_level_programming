#include "main.h"
/**
 * times_table - display the 9 times table
 * Description: print the 9 times table
 */

void times_table(void)
{
	int fila;
	int columna;
	int producto;

	for (fila = 0; fila <= 9; fila++)
	{
		for (columna = 0; columna <= 9; columna++)
		{
			producto = (fila * columna);

			if (columna == 0)
			{
				_putchar('0' + producto);
			}
			else if (producto <= 9)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar('0' + producto);
			}
			else if (producto > 9)
			{
				_putchar(',');
				_putchar(' ');
				_putchar('0' + (producto / 10));
				_putchar('0' + (producto % 10));
			}
		}
		_putchar('\n');
	}
}
