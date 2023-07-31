#include "lists.h"

/**
 * listint_len - Returns the num of Elements in a lLnked lists
 * @h: linked ls of type listint_t to Traverse
 *
 * Return: num of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t num = 0;

	while (h)
	{
		num++;
		h = h->next;
	}

	return (num);
}
