#include <stdio.h>
#include <stdlib.h>
/**
 * main - multiply
 * @argc: count
 * @argv: value
 * Return: result or 1
 **/
int main(int argc, char *argv[])
{
	int a, b, result;

	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	a = atoi(argv[1]);
	b = atoi(argv[2]);
	result = a * b;
	printf("%d\n", result);
	return (0);
}
