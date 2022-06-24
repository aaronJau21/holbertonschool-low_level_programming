#include "main.h"
/**
 * checker - checks the input number from n to the base.
 * @i: iterative number to compare its power to the number.
 * @number: given number.
 * Return: square root of number.
 */
int checker(int i, int number)
{
	if (i * i == number)
		return (i);
	if (i * i > number)
		return (-1);
	return (checker(i + 1, number));
}
/**
 * _sqrt_recursion - square root of a number.
 * @n: number to check for square roots.
 * Return: the square root of number.
 */
int _sqrt_recursion(int n)
{
	return (checker(1, n));
}
