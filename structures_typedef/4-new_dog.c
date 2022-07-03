#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - creates a new dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 *
 * Return: pointer to new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	unsigned int namelen, ownlen, i;
	dog_t *dog;

	if (name == NULL || owner == NULL)
		return (NULL);
	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);
	for (namelen = 0; name[namelen]; namelen++)
		;
	namelen++;
	dog->name = malloc(namelen * sizeof(char));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	for (i = 0; i < namelen; i++)
		dog->name[i] = name[i];
	dog->age = age;
	for (ownlen = 0; owner[ownlen]; ownlen++)
		;
	ownlen++;
	dog->owner = malloc(ownlen * sizeof(char));
	if (dog->owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}
	for (i = 0; i < ownlen; i++)
		dog->owner[i] = owner[i];
	return (dog);
}
