#include "main.h"
/**
 * *_memcpy - modify an memory space
 * @dest: Destination
 * @src: The value or source
 * @n: Number of elements.
 *
 * Return: s[]
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i;

	for (i = 0; n > 0; i++, n--)
	{
		dest[i] = src[i];
	}
	return (dest);
}
