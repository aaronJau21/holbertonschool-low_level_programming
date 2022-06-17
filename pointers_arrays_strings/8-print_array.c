#include "main.h"
#include <stdio.h>
/**
 * print_array - Print n values of the array
 * @a: The array
 * @n: The n numbers of index
 */
void print_array(int *a, int n)
{
/*Print the values of the array*/
int i = 0;
	for (i = 0; i < n; i++)
	{
		if (i != (n - 1))
			printf("%d, ", a[i]);
		else
			printf("%d", a[i]);
	}
	printf("\n");
}
