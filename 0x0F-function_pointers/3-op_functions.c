#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 *op_add - Returns addition of numbers
 *@a: The first number
 *@b: The second num
 *Return: the sum of a and b
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 *op_sub - Returns the differences of the two numbers
 *@a: the first number.
 *@b: the second number
 *Return: the difference of a and b
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - Returns the product of two numbers.
 * @a: first number
 * @b: second number
 * Return: the product of a and b
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - Returns the division of two numbers.
 * @a: first number
 * @b: second number
 * Return: The remainder of the division of a by b.
 */

int op_div(int a, int b)
{
	return (a / b);
}
/**
 * op_mod - Returns the mod
 * @a: the first number
 * @b: the second number
 * Return: the mod of the two numbers
 */
int op_mod(int a, int b)
{
	return (a % b);
}
