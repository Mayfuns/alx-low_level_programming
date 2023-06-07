#include "lists.h"

/**
 * reverse_listint - This will reverse a linked list
 * @head:This denotes  pointer to the first node in the linked list
 *
 * Return:This is to return pointer to the first node in the new list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL;
	listint_t *next = NULL;

	while (*head)
	{
		next = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = next;
	}

	*head = prev;

	return (*head);
}
