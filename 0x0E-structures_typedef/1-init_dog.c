#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * init_dog - initialize struct
 * @d: struct
 * @name: name
 * @age: age
 * @owner: owner
 * Description: struct dog
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
