#include "main.h"
#include <unistd.h>

/**
 * _putchar - it writes the character cto stdout
 * @c: This is the character to be printed
 * Return: on success 1
 */

int_putchar(char c)
{
	return (write(1, &c, 1));
}	
