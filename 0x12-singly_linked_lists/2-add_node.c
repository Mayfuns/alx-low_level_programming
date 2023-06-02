#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - A new node is to be added at the beginning of a linked list
 * @head: This denotes double pointer to thelist of list_t
 * @str: This is the additional string in the node
 *
 * Return: Return the address of the new element or NULL if it fails
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	unsigned int len = 0;

	while (str[len])
	len++;

	new = malloc(sizeof(list_t));
	if (!new)
	return (NULL);

	new->str = strdup(str);
	new->len = len;
	new->next = (*head);
	(*head) = new;

	return (*head);
	}
