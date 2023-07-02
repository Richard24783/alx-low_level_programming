#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - adds new nodes at the beginning
 * @head: points to the first node
 * @str: new string
 * Return: returns the address of new elements
 */
list_t *add_node(list_t **head, const char *str)
{
	lists_t *new;
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


