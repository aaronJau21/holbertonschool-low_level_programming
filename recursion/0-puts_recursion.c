#include "main.h"

void _puts_recursion(char *s)
{
	int n = 0;

	if (s[n] != '\0')
	{
		_putchar(s[n]);
		_puts_recursion(&(s[n + 1]));
	}
	else
	{
		_putchar('\n');
	}
}
