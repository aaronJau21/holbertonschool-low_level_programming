#include "main.h"
#include <string.h>
/**
 * *_strcat - Concatenate 2 stringsi
 *  * @dest: Pointer to Array.
 * @src: Number of elements.
 * Description: see variable
 * Return: "s1"+"s2"
 */

char *_strcat(char *dest, char *src)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
	{
	}

	for (j = 0; src[j] != '\0'; i++, j++)
	{
	dest[i] = src[j];
	}
	dest[i] = '\0';

	return (dest);
}
