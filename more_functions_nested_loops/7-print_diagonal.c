#include "main.h"
/**
 * print_diagonal - print character "\" n times
 * @n: number of characters to draw
 */
void print_diagonal(int n)
{
	int s;
	int f;

	if (n > 0)
	{
		for (s = 1; s <= n; s++)
		{
			for (f = 1; f < s; f++)
				_putchar(' ');
			_putchar('\\');
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
