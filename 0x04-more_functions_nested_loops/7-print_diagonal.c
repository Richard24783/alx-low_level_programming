#include "main.h"

/**
 * print_diagonal - prints '_' n times to make a straight line,
 * followed by new line
 * @n: number of times to print '_'
 * Return: no return value
 */

void print_diagonal(int n)
{
	int a;
	int b;

	if (n <= 0)
	{
		_putchar('\n');
		return;
	}

	for (a = 0; a < n; a++)
	{
		for (b = 0; b < a; b++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
}
