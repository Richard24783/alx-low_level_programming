#include <stdio.h>
/**
 *main - This is the main entry of the program
 *This program will assign a random number to a variable n
 *This varible n will store a different value each time this program runs
 *The program prints whether the number in the variable n is (+) or (-)
 *Return: Always return 0 (success)
 */
int main(void)
{
	int n;

	if (n > 0)
	{
	printf("%d is positive\n", n);
	}
	else  if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else
	{
		printf("%d is negative\n", n);
	}
	return (0);
}
