#include "main.h"

/**
 * *cap_string- Higger the capital
 * @n: Pointer to Array
 * Description: see variable
 * Return: n
 */

char *cap_string(char *n)
{
	int i, s;
	int cap = 32;
	int separators[12] = {',', ';', '.', '?', '"',
		 '(', ')', '{', '}', ' ', '\n', '\t'};

	for (i = 0; n[i] != '\0'; i++)
	{
		if (n[i] >= 'a' && n[i] <= 'z')
		{
			n[i] = n[i] - cap;
		}

		cap = 0;

		for (s = 0; s <= 12; s++)
		{
			if (n[s] == separators[s])
			{
				s = 12;
				cap = 32;
			}
		}
	}
	return (n);
}
