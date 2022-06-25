#include "main.h"
/**
 * *_strchr - Find the char in str
 * @s: Destination
 * @c: The value or source
 *
 * Return: the rest of the string
 */

char *_strchr(char *s, char c)
{
	int len;

	for (len = 0; (s[len] != '\0') && (s[len] != c); len++)
	{
	}
	if (s[len] == c)
	{
		return (&(s[len]));
	}
	else
	{
		return (0);
	}
}
