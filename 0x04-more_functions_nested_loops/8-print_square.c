#include "main.h"

/**
 *  * print_square - prints a square of side size
 * @size: length of sides of the square
 * Return: no return value
 */

void print_square(int size)
{
	int i;

	if (size > 0)
	{
		for (i = 1; i <= size; i++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
	else
	{
		_putchar('\n');
	}
}
