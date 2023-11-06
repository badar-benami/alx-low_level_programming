#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - initializes a struct dog variable.
 * @d: struct dog initialization pointer.
 * @name: initialize name.
 * @age: initialization age.
 * @owner: owner must initiate.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}
