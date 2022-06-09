#include<stdio.h>
/**
 *main - prints hexadecimal
 *Return: Always 0 (Success)
 */
int main(void)
{
	int n = '0';
	int l = 'a';

	while (n <= '9')
	{
		putchar(n);
		n++;
	}

	while (l <= 'f')
	{
		putchar(l);
		l++;
	}
	putchar('\n');

	return (0);
}
