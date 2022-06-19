#include "main.h"
/**
 * reverse_array - Concatenate 2 stringsi
 * @a:  Pointer to Array.
 * @n: Number of elements.
 * Description: see variable
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int l, temp;

	n -= 1;
	for (l = 0; l < n; l++, n--)
	{
		temp = a[l];
		a[l] = a[n];
		a[n] = temp;
	}
}
