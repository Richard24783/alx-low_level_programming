#include "main.h"

/**
 * print_most_numbers - prints numbers from 0 to 9, excluding 2 and 4
 * Return: no return value
 */

void print_most_numbers(void)
{
	int y;

	for (y = 0; y < 10; y++)
	{
		if (y == 2 || y == 4)
			continue;
		else
			_putchar(y + '0');
	}
	_putchar('\n');
}
