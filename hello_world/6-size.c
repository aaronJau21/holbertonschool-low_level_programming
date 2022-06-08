#include <stdio.h>

/**
 * main - Entry point
 *
 *
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char scharacter;
	int sinteger;
	long slong;
	long long slonglong;
	float sfloat;

	printf("Size of a char: %lu byte(s)\n", sizeof(scharacter));
	printf("Size of an int: %lu byte(s)\n", sizeof(sinteger));
	printf("Size of a long int: %lu byte(s)\n", sizeof(slong));
	printf("Size of a long long int: %lu byte(s)\n", sizeof(slonglong));
	printf("Size of a float: %lu byte(s)\n", sizeof(sfloat));
	return (0);
}
