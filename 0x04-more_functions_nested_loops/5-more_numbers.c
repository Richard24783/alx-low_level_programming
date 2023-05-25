#include "main.h"

/**
 *  more_numbers - prints 10 times the numbers from 0 to 14
 * Return: no return value
 */

void more_numbers(void)
{
	int k;
	int l;

	for (k = 0; k < 10; k++)
	{
		for (l = 0; l <= 14; l++)
		{
			if (l > 9)
			{
				_putchar('0' + (l / 10));
			}
			_putchar('0' + (l % 10));
		}
		_putchar('\n');
	}
}

