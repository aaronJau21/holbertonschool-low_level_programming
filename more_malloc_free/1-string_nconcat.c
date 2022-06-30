#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *string_nconcat - malloa and If it fails exit with 98 value
 * @s1: 1st string
 * @s2: 2nd string
 * @n: N numbers of the second string
 * Return: s3.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s3;
	int i;
	unsigned int j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	i = 0;
	while (s1[i] != '\0')
		i++;
	s3 = malloc(sizeof(char) * (i + n + 1));
	if (s3 == NULL)
		return (NULL);
	i = j = 0;
	while (s1[i] != '\0')
	{
		s3[i] = s1[i];
		i++;
	}
	while (j < n && s2[j] != '\0')
	{
		s3[i] = s2[j];
		i++, j++;
	}
	s3[i] = '\0';
	return (s3);
}
