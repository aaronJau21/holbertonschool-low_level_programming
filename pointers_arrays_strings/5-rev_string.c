#include "main.h"
#include <string.h>
/**
 * rev_string - Print in reverse a string
 * Description: Show each char of the string
 * @s: The char
 */
void rev_string(char *s)
{
	int h, rigth, lent;
	char tem;

	lent = strlen(s);

	rigth = lent - 1;

	for (h = 0; h < rigth; h++)
	{
		tem = s[h];
		s[h] = s[rigth];
		s[rigth] = tem;
		rigth--;
	}
}
