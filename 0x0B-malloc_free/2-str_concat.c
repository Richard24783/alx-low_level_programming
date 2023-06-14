#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* str_concat - This concatenats two strings.
* @s1: The pointer to a string.
* @s2: The pointer to string.
*
* Return: pointer to newly allocated memory
* with s1, s2 and null byte.
* NULL on failure.
*/

char *str_concat(char *s1, char *s2)
{
	unsigned int a = 0, b = 0, ss1 = 0, ss2 = 0;
	char *res;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	while (s1[ss1] != '\0')
		ss1++;

	while (s2[ss2] != '\0')
		ss2++;

	res = malloc(sizeof(char) * (ss1 + ss2 + 1));
	if (res == NULL)
		return (NULL);

	while (a < ss1)
	{
		res[a] = s1[a];
		a++;
	}
	while (b < ss2)
	{
		res[a] = s2[b];
		a++;
		b++;
	}
	res[a] = '\0';
	return (res);

}
