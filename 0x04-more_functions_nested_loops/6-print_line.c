#include "main.h"

/**
 * print_line - prints _  n times to make a straight line, followed by new line
 * @n: number of times to print _
 * Return: no return value
 */

void print_line(int n)
{
	int k;

	if (n > 0)
	{
		for (k = 1; k <= n; k++)
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}
