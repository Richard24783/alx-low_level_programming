#include "function_pointers.h"
#include <stdio.h>

/**
 *print_name - pointer to function prints name
 *@name: string to add
 *@f: pointer to function
 *Return: do return nothing
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
