#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
* _strdup - This returns pointer to a newly allocated
* space in memory which contains copy of the string passed.
* @str: The pointer to string being duplicated.
*
* Return: Pointer to dup string on success
* NULL if str is NULL.
* NULL if mem was insufficient.
*/

char *_strdup(char *str)
{
	char *str2;
	unsigned int size = 0, a;

	if (str == NULL)
		return (NULL);

	for (a = 0; str[a] != '\0'; a++)
	{
		size++;
	}

	str2 = malloc(sizeof(char) * (size + 1));

	if (str2 == NULL)
		return (NULL);

	for (a = 0; a < size; a++)
	{
		str2[a] = str[a];
	}
	return (str2);
}
