#include "main.h"
#include <stdlib.h>
/**
 *create_array - creates array of char
 * returns NULL if size is 0
 * @size: size of array
 * @c: array of char to count
 *
 * Return: returns a pointer
 */
char *create_array(unsigned int size, char c)
{
	char *ptArray;
	unsigned int count;

	ptArray = malloc(size * sizeof(char));

	for (count = 0; count < size; count++)
	{
		ptArray[count] = c;
	}
	return (ptArray);
}
