#include "dog.h"

/**
 * init_dog - Check code
 * @d: first arg
 * @name: second arg
 * @age: third arg
 * @owner: last arg
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
