#include "LISTS_H"
#include <stdio.h>

/**
 * print_listint - prints all the elements.
 * @h: pointer
 * Return: returns the number of node.
 */
size_t print_listint(const listint_t *h)
{
	size_t count = 0;
	while (h != NULL)
	{
	printf("%d\n", h->n);
	h = h->next;
	count++;
	}
	return (count);
}
