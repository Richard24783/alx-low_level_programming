#include "main.h"

/**
 *  * print_square - prints a square of side size
 * @size: length of sides of the square
 * Return: no return value
 */

void print_square(int size)
{
	int i, j;

	if (size > 0)
	{
		for (i = 1; i <= size; i++)
		{
			for (j = 1; j <= size; j++)
			{
				_putchar('#');
			}
			_putchar('\n');
			j = 1;
		}
	}
	else
	{
		_putchar('\n');
	}
}
