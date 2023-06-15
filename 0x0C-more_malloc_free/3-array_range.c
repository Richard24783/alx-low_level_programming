#include "main.h"
#include <stdlib.h>
/**
 *array_range - creates an array of integers
 *@min:values ordered from minimum
 *@max: values to mamximum
 *Return: points to the newly created array
 */

int *array_range(int min, int max)
{
	int *arr;
	int i;

	if (min > max)
	return (NULL);

	arr = malloc(sizeof(int) * (max - min + 1));
	if (arr == NULL)
	return (NULL);

	for (i = 0; min <= max; i++, min++)
	arr[i] = min;

	return (arr);
}
