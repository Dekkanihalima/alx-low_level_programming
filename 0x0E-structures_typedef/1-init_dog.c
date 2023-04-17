#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - intializes a dog structure
 * @d: A dog structure
 * @name: the name of the dog
 * @age: the age of the dog
 * @owner:the  owner of the dog
 *
 * Return: Nothing
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
	d->name = name;
	d->age = age;
	d->owner = owner;
	}
}
