#include <stdio.h>
/**
 *main - main entry
 *Prints the lowercase alpahabet in reverse
 *Return: Always return 0 (success)
 */

int main(void)
{
	char ch = 'z';

	while (ch >= 'a')
	{
		putchar(ch);
		ch--;
	}

	putchar('\n');

	return (0);
}
