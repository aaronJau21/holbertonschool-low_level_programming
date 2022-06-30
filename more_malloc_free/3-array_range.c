#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *array_range - create an array int range
 * @min: min number
 * @max: max number
 * Return: arri
 */
int *array_range(int min, int max)
{
	int *arri, i;

	if (min > max)
		return (NULL);

	arri = malloc(sizeof(int) * (max - min + 1));
	if (!arri)
		return (NULL);
	for (i = 0; min <= max; i++, min++)
		arri[i] = min;
	return (arri);
}
