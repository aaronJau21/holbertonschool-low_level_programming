#include "main.h"
/**
 * *string_toupper- Concatenate 2 stringsi
 * @p: Pointer to Array
 * Description: see variable
 * Return: n
 */

char *string_toupper(char *p)
{
	int s;

	for (s = 0; p[s] != '\0'; s++)
	{
		if (p[s] >= 'a' && p[s] <= 'z')
		{
			p[s] -= 32;
		}
	}
	return (p);
}
