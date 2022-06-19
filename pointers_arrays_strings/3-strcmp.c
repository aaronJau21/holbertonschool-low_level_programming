#include "main.h"
#include <string.h>
/**
 * *_strcmp - Check 2 strings
 * @s1: First
 * @s2: Second
 * Description: see variable
 * Return: It depends
 */

int _strcmp(char *s1, char *s2)
{
	int i, i2;

	i = strlen(s1); 
	i2 = strlen(s2);

	if (s1[i] != s2[i2])
	{
		return (s1[i] - s2[i2]);
	}
	return (0);
}
