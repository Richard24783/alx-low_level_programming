#include "main.h"
#include <stdlib.h>
/**
 *malloc_checked - Allocates memory using malloc.
 *Return: returns a pointer
 *@b: character to pointer
 */

void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);

	if (ptr == NULL)
	{
	exit(98);
	}
	return (ptr);
}
