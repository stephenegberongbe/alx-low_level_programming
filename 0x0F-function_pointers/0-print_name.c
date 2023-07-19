#include "function_pointers.h"
#include <stdio.h>
/**
 * print_name - prints name using a pointer to function
 * @name: string to be added
 * @d: pointer to a function
 * Return: Null.
**/
void print_name(char *name, void (*d)(char *))
{
	if (name == NULL || d == NULL)
		return;

	d(name);
}
