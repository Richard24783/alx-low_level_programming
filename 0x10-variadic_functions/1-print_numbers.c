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

		unsigned int index;

	for (index = 0; index < n; index++)
	{

		printf("%d", va_arg(args, int));

	if (separator != NULL && index < n - 1)
		printf("%s", separator);
	}
		printf("\n");
		va_end(args);
}
