#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *_calloc - blocks of mem malloc
 * @nmemb: numero of members
 * @size: sizze
 * Return: arr
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *arr;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	arr = malloc(nmemb * size);
	if (!arr)
		return (NULL);
	for (i = 0; i < nmemb * size; i++)
		arr[i] = 0;
	return (arr);
}
