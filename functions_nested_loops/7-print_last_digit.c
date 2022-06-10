#include "main.h"
/**
 * print_last_digit - The last number of a digit
 * Description : give the last digit whether its positive or negative
 *@n:The value will take from
 * Return:The last number
 */
int print_last_digit(int n)
{
	int ln;

	ln = n % 10;

	if (ln < 0)
	{
		_putchar(-ln + '0');
		return (-ln);
	}
	else
	{
		_putchar(ln + '0');
		return (ln);
	}
}
