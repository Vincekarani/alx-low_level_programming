#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 * print_dog - a fn that prints a struct dog
 * @d: argv struct
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	if (d->name == NULL)
		d->name = "(nil)";
	if (d->owner == NULL)
		d->owner = "(nil)";
	printf("Name: %s\nOwner: %s\nAge: %f\n", d->name, d->owner, d->age);
}

