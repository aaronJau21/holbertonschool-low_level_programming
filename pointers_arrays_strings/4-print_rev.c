#include "main.h"
#include <string.h>
/**
  * print_rev - Print in reverse
  * Description: Show each char of the string
  * @s: The char
  */
void print_rev(char *s)
{
	int al, re;

	re = strlen(s);

	for (al = re - 1; al >= 0; al--)
	{
		_putchar(s[al]);
	}
	_putchar('\n');
}
