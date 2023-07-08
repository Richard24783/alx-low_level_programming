#include "main.h"
#include <stdio.h>

/**
 * clear_bit - sets the value of a bit to 0 at an index
 * @index: the index starting from 0 of the bit set
 * @n: number of bits
 * Return: return 1 if works or -1 when fails
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
if (index > (sizeof(unsigned long int) * 8 - 1))

	return (-1);
		*n &= ~(1UL << index);

	return (1);
}
