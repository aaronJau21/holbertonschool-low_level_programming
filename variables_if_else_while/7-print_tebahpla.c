#include<stdio.h>
/**
 *main - print alphabet reversed using putchar
 *Return: Always 0 (Success)
 */
int main(void)
{
	int l = 'z';

	while (l >= 'a')
	{
		putchar(l);
		l--;
	}
	putchar('\n');

	return (0);
}
