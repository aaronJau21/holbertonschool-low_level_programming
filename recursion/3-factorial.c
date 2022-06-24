#include "main.h"
/**
 * factorial - Factorial
 * Description: see var
 * @n: given number
 * Return: n or factorial
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0 || n == 1)
		return (n);
	else
		return (n * factorial(n - 1));
}
