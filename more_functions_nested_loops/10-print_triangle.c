#include "main.h"

/**
 * print_triangle - print 'triangule'
 * @size: size of
 */

void print_triangle(int size)
{
	int tri, al, base;

	if (size <= 0)
		_putchar('\n');

	for (tri = 1; tri <= size; tri++)
	{
		for (al = 1; al <= (size - tri); al++)
			_putchar(' ');

		for (base = 1; base <= tri; base++)
			_putchar('#');

		_putchar('\n');
	}
}
