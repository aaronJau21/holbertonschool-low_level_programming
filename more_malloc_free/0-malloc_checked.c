#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *malloc_checked - malloa and If it fails exit with 98 value
 * @b: an integer unsigned
 * Return: Pointer.
 */
void *malloc_checked(unsigned int b)
{
	unsigned int *p;

	p = malloc(b);
	if (!p)
		exit(98);
	return (p);
}
