#include "main.h"
/**
 * print_alphabet_x10() - print alphabet
 * Description: 10 times the alphabet
 * Return: Always 0.
 */

void print_alphabet_x10(void)
{
	int al = 'a';
	int i;

	for (i = 0; i <= 9; i++)
	{
		while (al <= 'z')
		{
			_putchar(al);
			al++;
		}
	}
	_putchar('\n');
}
