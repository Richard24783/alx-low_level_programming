#include "main.h"
/**
 * _pow_recursion - returns the value of x 
 * @x: value raised to the power y
 * Return: returns the result of the power
 */
int _pow_recursion(int x, int y)
{
	if (0 > y)
	return (-1);

	if (y == 0)
		return (1);
	return (x * _pow_recursion(x,y - 1));
}	

