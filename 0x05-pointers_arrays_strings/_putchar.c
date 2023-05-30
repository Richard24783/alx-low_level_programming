#include "main.h"
#include <unistd.h>

/**
 * _putchar - It writes the character c to stdout
 * @c: This is the character to be printed 
 *
 *Return: on success 1
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}	
		
