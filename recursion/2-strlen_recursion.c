#include "main.h"
/**
 * _strlen_recursion - Count lenght
 * Description: see var
 * @s: Array
 * Return: len
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		s++;
		return (_strlen_recursion(s) + 1);
	}
}
