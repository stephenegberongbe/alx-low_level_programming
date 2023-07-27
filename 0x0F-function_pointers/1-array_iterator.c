#include "function_pointers.h"
#include <stdio.h>
/**
 * array_iterator - Prints each Array elem on newl
 * @array: array!
 * @size: how many elem to be printed
 * @action: Pointer to be printed in regular or hex form
 * Return: void always
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int a;

	if (array == NULL || action == NULL)
		return;

	for (a = 0; a < size; a++)
	{
		action(array[a]);
	}
}