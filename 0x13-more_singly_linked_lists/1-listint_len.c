#include "lists.h"
#include <stdio.h>

/**
 * listint_len - prints all the elements.
 * @h: linked list of type listint_to traverse
 * Return: returns the number of nodes.
 */
size_t print_listint(const listint_t *h)
{
	size_t num = 0;
	while (h)
	{
	num++;
	h = h->next;
	}
	return (num);
}
