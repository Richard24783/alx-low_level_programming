#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - prints numbers followed by new line
 * @separator: string to be printed
 * @n: number of integers passed to the function
 * @...: variable number of elements to be printed
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
		va_list args;

		va_start(args, n);

	for (unsigned int i = 0; i < n; i++)
	{

		printf("%d", va_arg(args, int));

	if (separator != NULL && i < n - 1)
		printf("%s", separator);
	}
		printf("\n");
		va_end(args);
}
