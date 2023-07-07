#include "main.h"
#include <stdio.h>

/**
 * set_bit -  sets a bit at a given index to 1
 * @index: index from 0 of bit at target
 * @n: number of bits
 * Retun 1 on (success) or -1 on failure
 */
int set_bit(unsigned long int *n, unsigned int index)

{
	if (index > sizeof(unsigned long int) * 8 - 1)


	return (-1);

	*n |= 1UL << index;
	return (1);
}
