#include "main.h"

/**
 * _islower - show 1 and 0 whether is a lowercase or no
 * @c: character
 * Return: 1 lowercase, 0 uppercase
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
