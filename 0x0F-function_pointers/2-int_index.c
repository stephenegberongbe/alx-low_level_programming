#include "function_pointers.h"
/**
 * int_index - returns to  index place if Comparison = true, otherwise -1
 * @array: array
 * @size: size of elements in an array
 * @cmp: pointer to a func of one of the 3 in main
 * Return: 0 Always
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int p;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);

	for (p = 0; p < size; p++)
	{
		if (cmp(array[p]))
			return (p);
	}
	return (-1);
}
