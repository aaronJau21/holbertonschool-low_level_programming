#include "main.h"
/**
  * _puts - puts
  * Description: Show each char of the string
  * @str: The char
  */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
