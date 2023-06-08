#include "main.h"
/**
 *_strlen_recursion - Prints the length of a string
 *@s: The string to be calculated
 *Return: The length of the string
 */
int _strlen_recursion(char *s)
{
	int lenght = 0;

	if (*s)
	{
		lenght++;
		lenght += _strlen_recursion(s + 1);
	}
	return (lenght);
}
