#include "main.h"
/**
 * *_memset - modify an memory space
 * @s: Constant
 * @b: The value or source
 * @n: Number of elements.
 *
 * Return: s[]
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; n > 0; i++, n--)
	{
		s[i] = b;
	}
	return (s);
}
