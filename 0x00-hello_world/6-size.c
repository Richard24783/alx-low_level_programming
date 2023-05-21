#include <stdio.h>

/**
 *main - This is the main entry
 *Return: Always return 0 as success
 */

int  main(void)
{
	printf("size of a char : %ld byte(S) \n", sizeof(char));

	printf("size of an int : %ld byte(s) \n", sizeof(int));

	printf("size of a long int : %ld byte(s) \n", sizeof(long int));

	printf("size of a long long int : %ldbyte(s) \n", sizeof(long long int));

	printf("size of a float : %ldbyte(s) \n", sizeof(float));
	return (0);
}
