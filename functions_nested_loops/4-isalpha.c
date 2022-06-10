#include "main.h"
/**
  * _isalpha - show 1 if its a letter
  *
  *@c: character
  *
  * Return: show 1 if its a letter else 0
  */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
