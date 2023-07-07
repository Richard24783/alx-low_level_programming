#include <stdio.h>
#include <stdlib.h>
/**
 * print_binary - prints binary representation
 * @n: number of binary
 * Return: return  
 */
void print_binary(unsigned long int n)
{
	unsigned long int i;

	for (i = 1UL << 63; i > 0; i >>= 1)
	if (n & i)
		putchar('1');
	else
		putchar('0');
}
