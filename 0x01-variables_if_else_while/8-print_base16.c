#include <stdio.h>
/**
 *main - This is the main entry
 *Prints all the numbers of base 16 in lowercase, followed by new line
 *Return: Always return 0 (success)
 */

int main(void)
{
	int h = 0;

	while (h < 16)
	{
		if (h < 10)
		{
			putchar(h + '0');
		}
		else
		{
			putchar('a' + (h - 10));
		}
		h++;
	}

	putchar('\n');

	return (0);
}
