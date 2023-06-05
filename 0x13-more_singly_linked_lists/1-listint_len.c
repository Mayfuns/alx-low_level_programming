#include "lists.h"

/**
 * listint_len - This returns the number of ellements in a linked list.
 * @h: This linked list of type listint_t to traverse
 *
 * Return: This returns the number of nodes.
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
