#include <stdio.h>

/**
 *  main - prints numbers 1 to 100 followed by a new line.
 * prints Fizz for all multiples of 3, Buzz for all multiples of 5,
 * and FizzBuzz for multiples of both 3 and 5.
 * Return: Always 0
 */

int main(void)
{
	int o;

	for (o = 1; o <= 100; o++)
	{
		if (o % 3 == 0 && o % 5 == 0)
		{
			printf("FizzBuzz ");
		}
		else if (o % 5 == 0)
		{
			printf("Buzz ");
		}
		else
		{
			printf("%d ", o);
		}
	}
	printf("\n");

	return (0);
}

