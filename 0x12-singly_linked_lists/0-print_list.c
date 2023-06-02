#include <stdio.h>
#include "lists.h"

/**
 * print_list - This prints all the element of a linked list
 * @h: This is the pointer to the list_t list to print
 *
 * Return: The number of the nodes to be printed is returned
 */
size_t print_list(const list_t *h)
{
	size_t s = 0;

	while (h)
	{
		if (!h->str)
		printf("[0] (nil)\n");
		else
		printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		s++;
	}
	return (s);
}
