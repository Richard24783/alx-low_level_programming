#include "lists.h"
#include <stdlib.h>
/**
 * add_nodeint - adds a new at the beginning
 * @head: pointer to the node in the list
 * @n: data to insert
 *
 * Return: pointer to the new node, NULL if it fails
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	list_t *neww;

	new = malloc(sizeof(listint_t));
	if(new)
		return (NULL);

	new-> = n;
	new-> = *head;
	*head = new;

	return (new);
}
