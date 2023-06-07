#include "lists.h"

/**
 * get_nodient_at_index - At a certain idex,returns the node in a linked list.
 * @head: This denotes index of the node to return
 *
 * @index: This is the index of the node to locate- indices start at 0
 *
 * Return: This is to return pointer to the node in search , or NULL.
 * Otherwise - the located node.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *temp = head;

	while (temp && i < index)
	{
		temp = temp->next;
		i++;
	}

	return (temp ? temp : NULL);
}
