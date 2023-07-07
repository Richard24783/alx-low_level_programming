#include "main.h"

/**
 * get_bit - Returns the value of bit
 * @index: index of a bit at target
 * @n: number of bits
 * Return: returns the value of bit.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit_value;

	if (index > 63)
		return (-1);

	bit_value = (n >> index) & 1;

	return (bit_value);
}
