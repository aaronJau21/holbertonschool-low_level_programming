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

	for (i = 0; i < lent; i++)
	{
		if (i % 2 == 0)
			_putchar(str[i]);
	}
	_putchar('\n');
}
