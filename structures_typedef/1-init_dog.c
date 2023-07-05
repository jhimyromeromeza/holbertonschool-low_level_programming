#include "dog.h"
#include <stdlib.h>
/**
 * init_dog - initialize a variable of type strct
 * @d: initializes
 * @name: check pointers
 * @age: check
 * @owner: check pinters
 *
 * Return: result (succelss)
 */

void init_dog(struct dog *d, char *name, float age, char *owner)

{
	if (d == NULL)
	{
		return;
	}
	d->name = name;
	d->age = age;
	d->owner = owner;
}
