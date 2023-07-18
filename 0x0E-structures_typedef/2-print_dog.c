#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * print_dog - a struct dog to be printed
 * @e: struct dog to be printed
 */
void print_dog(struct dog *e)
{
	if (e == NULL)
		return;

	if (e->name == NULL)
		e->name = "(nil)";
	if (e->owner == NULL)
		e->owner = "(nil)";

	printf("Name: %s\nAge: %f\nOwner: %s\n", e->name, e->age, e->owner);
}
