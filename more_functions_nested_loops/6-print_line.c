#include "main.h"

/**
 * print_line - Write _ n times.
 * @n: Integer amount of _
 */
void print_line(int n)
{
	int c = 0;

	while (c < n)
	{
		_putchar('_');
		c++;
	}
	_putchar('\n');
}
