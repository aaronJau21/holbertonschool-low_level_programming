#include<stdio.h>
/**
 * main - Entry point
 * Description - 'Creating a random number and if it positive or negative'
 * Return: Always 0 (Success)
 */
int main(void)
{
	int number = 0;

	while (number < 10)
	{
		printf("%i", number);
		number++;
	}
	putchar('\n');

	return (0);
}
