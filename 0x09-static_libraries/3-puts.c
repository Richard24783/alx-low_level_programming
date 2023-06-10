#include "main.h"
/**
 * _puts - prints a char, follwed by a new line, to stdout
 *@s: char to print
 */
void _puts(char *s)
{
	while (*s != '\0')
	{
		_putchar(*s++);
	}
		_putchar('\n');
}
