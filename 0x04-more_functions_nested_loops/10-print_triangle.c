#include "main.h"

/**
 *  print_triangle - prints a triangle using #, followed by a new line
 * @size: - size of height and width of triangle
 * Return: no return value
 */

void print_triangle(int size)
{
	int a;
	int b;
	int c;

	b = 0;
	c = 0;
	if (size > 0)
	{
		for (a = 1; a <= size; a++)
		{
			b = size - a;
			while (b > 0)
			{
				_putchar(' ');
				b--;
			}
			c = a;
			while (c > 0)
			{
				_putchar('#');
				c--;
			}

		}
	}
	else
	{
		_putchar('\n');
	}
}

