#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * print_dog - print struct
 * @d: check pointers struct
 *
 * Return: result (succelss)
 */

void print_dog(struct dog *d)

{
	if (d == NULL)
	{
		return;
	}
	printf("Name: %s\n", d->name ? d->name : "(nil)");
	printf("Age: %f\n", d->age);
	printf("Owner: %s\n", d->owner ? d->owner : "(nil)");
}
