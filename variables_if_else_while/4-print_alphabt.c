#include<stdio.h>
/**
 * main - Entry point
 * Description - 'Creating a random number and if it positive or negative'
 * Return: Always 0 (Success)
 */

int main(void)
{
	int l = 'a';

	while (l <= 'z')
	{
		if ((l != 'q') && (l != 'e'))
		{
			putchar(l);
		}
		l++;
	}
	putchar('\n');

	return (0);
}
