#include <stdio.h>

/**
 *  main - prints numbers 1 to 100 followed by a new line.
 * prints Fizz for all multiples of 3, Buzz for all multiples of 5,
 * and FizzBuzz for multiples of both 3 and 5.
 * Return: Always 0
 */

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			printf("FizzBuzz ");
		}
		else if (i % 3 == 0)
		{
			printf("Fizz ");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz ");
		}
		else
		{
			printf("%d ", i);
		}
	}

	printf("\n");

	return (0);
}
