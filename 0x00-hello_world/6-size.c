#include <stdio.h>

/**
 *main - This is the main entry
 *Return: Always return 0 as success
 */

int  main(void)
{
	printf("size of a char : %ld", sizeof(char));

	printf("size of an int : %ld", sizeof(int));

	printf("size of a long int : %ld", sizeof(long int));

	printf("size of a long long int : %ld", sizeof(long long int));

	printf("size of a float : %ld", sizeof(float));
	return (0);
}
