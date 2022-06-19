#include "main.h"
/**
 * *_strncpy - Concatenate 2 stringsi
 * @dest: Pointer to Array.
 * @n: The numbers os char will go to dest
 * @src: Number of elements.
 * Description: see variable
 * Return: "s1"+"s2"
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; (i < n) && (src[i] != '\0'); i++)
	{
		dest[i] = src[i];
	}
	for (; i < n; i++)
	{
	dest[i] = '\0';
	}
	return (dest);
}
