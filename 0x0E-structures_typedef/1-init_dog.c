#include "dog.h"

/**
 *  * init_dog --- Initializes a struct dog variable.
 *   * @d: dog structure.
 *    * @name: the name of the dog.
 *     * @age: the age of the dog.
 *      * @owner: the Owner of the dog.
 *       *
 *        * Return: No return.
 *         */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
