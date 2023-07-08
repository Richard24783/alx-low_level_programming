#include "main.h"
#include <stdio.h>

/**
 * flip_bits - returns the number of bit needed
 *for fliping from one to another
 * @n: first number of bit
 * @m: second number
 * Return: returns bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	 int i,count = 0;
	 unsigned long int current;
	 unsigned long int exclusive = n ^ m;

	 for (i = 63; i >= 0; i++)
		{
			current = exclusive >> i;
			if(current & 1)
				count++;
		}
	 return (count);
}
