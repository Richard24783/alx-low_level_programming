#include <stdio.h>

/**
 *main - This is the main entry
 *Return: Always return 0 as success
 */

int  main(void)
{
	printf("size of a char : %ld\nbyte(S)", sizeof(char));

	printf("size of an int : %ld\nbyte(s)", sizeof(int));

	printf("size of a long int : %ld\nbyte(s)", sizeof(long int));

	printf("size of a long long int : %ld\nbyte(s)", sizeof(long long int));

	printf("size of a float : %ld\nbyte(s)", sizeof(float));
	return (0);
}
