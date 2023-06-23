#include <stdio.h>
#include <stdarg.h>

/**
 * sum_them_all - Request the sum of all param
 * @n: The number of parameters passed to the function
 * @...: A variable number of parameters to calculate the sum of
 * Return: if n ==  0 - 0.
 * otherwise - the sum of all parameters
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int i, sum = 0;

	va_start(ap, n);

	for (i = 0; i < n; i++)
		sum += va_arg(ap, int);

	va_end(ap);

	return (sum);
}
