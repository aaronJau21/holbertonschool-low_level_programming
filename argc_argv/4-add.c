#include <stdio.h>
#include <stdlib.h>

/**
 * main - add 2 numbers and +
 * @argc: count
 * @argv: value
 * Description: Print the sum of numbers, if not a number error
 * Return: 1 if error, 0 if function runs properly.
 */

int main(int argc, char *argv[])
{
	int sum, i;
	char *p;
	int num;

	sum = 0;
	if (argc > 1)
	{
		for (i = 1; argv[i]; i++)
		{
			num = strtol(argv[i], &p, 10);
			if (!*p)
				sum += num;
			else
			{
				printf("Error\n");
				return (1);
			}
		}
	}
	printf("%d\n", sum);
	return (0);
}
