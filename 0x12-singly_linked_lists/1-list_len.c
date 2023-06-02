#include <stdlib.h>
#include "lists.h"

/**
 * list_len -The number of elements in the linked list should be returned
 * @h: This denotes the pointer to the list of list_t
 *
 * Return: The number of elements in h should be returned
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
