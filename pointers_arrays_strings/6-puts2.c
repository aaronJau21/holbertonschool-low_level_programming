#include "main.h"
#include <string.h>
/**
 * puts2 - Print in reverse a string
 * Description: Show each char of the string
 * @str: The char
 */
void puts2(char *str)
{
	int i, lent;

	lent = strlen(str);

	if (lent % 2 == 0)
	{
		for (i = lent / 2; i < lent; i++)
		{
			_putchar(str[i]);
		}
	}
	else
	{
		for (i = (lent / 2) + 1; i < lent; i++)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}
