#include "main.h"
/**
 * _strspn - gets the length
 * * @s: string
 * @accept: source
 * Return: the number of bytes equal the length
 */
unsigned int _strspn(char *s, char *accept)
{
	int i;
	int x;
	unsigned int length;

	length = 0;
	for (i = 0; s[i] != '\0'; i++)
	{
		for (x = 0; accept[x] != '\0' && accept[x] != s[i]; x++)
			;
		if (s[i] == accept[x])
			length++;
		if (accept[x] == '\0')
			return (length);
	}
	return (length);
}
