#include <stdlib.h>
#include "lists.h"

/**
 * list_len - Returns the num of elements in a Linked ls
 * @h: Pointer to list_t list
 *
 * Return: num of elements in h
 */
size_t list_len(const list_t *h)
{
	size_t n = 0;

	while (h)
	{
		n++;
		h = h->next;
	}
	return (n);
}
