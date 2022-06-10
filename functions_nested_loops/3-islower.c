#include "main.h"
/**
 *_islower - lowercase character
 * @c: character to verify
 * return: 1 if lowercase, 0 if uppercase
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
	_putchar('\n');
}
