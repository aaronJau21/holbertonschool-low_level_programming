#include <stdio.h>
#include "dog.h"
/**
* init_dog - Init struct of dog.
* @d: pointer of the element type dog.
* @name: name of the dog.
* @age: age of the dog.
* @owner: owner of dog.
* Return: If not exec return.
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (!d)
		return;
	d->name = name;
	d->age = age;
	d->owner = owner;
}
