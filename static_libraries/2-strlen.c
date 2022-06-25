#include "main.h"
#include <string.h>

/**
  * _strlen - Get the lenght of the string
  * @s: String
  * Return: Always 0.
  */

int _strlen(char *s)
{
	int l = 0;

	while (*s != '\0')
	{
		s++;
		l++;
	}
	return (l);
}
