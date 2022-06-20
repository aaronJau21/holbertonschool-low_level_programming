#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - print sums of diagonals in matrix
 * @a: matrix
 * @size: size of matrix
 */

void print_diagsums(int *a, int size)
{

	int diagonal_1 = 0;
	int diagonal_2 = 0;
	int r, i;

	for (r = 0; r < size; r++)
	{
		i = (r * size) + r;
		diagonal_1 += a[i];
	}

	for (r = 1; r <= size; r++)
	{
		i = (r * size) - r;
		diagonal_2 += a[i];
	}

	printf("%d, %d\n", diagonal_1, diagonal_2);

}
