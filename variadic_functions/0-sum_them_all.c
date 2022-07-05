#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - return sum of args
 * @n: numbers to add
 * Return: sum
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i, s = 0;
	va_list arg;

	if (n == 0)
		return (0);
	va_start(arg, n);

	for (i = 0; i < n; i++)
		s += va_arg(arg, int);
	va_end(arg);

	return (s);
}
