#include <stdio.h>

#define ABS(x) ((x) < 0 ? -(x) : (x))

int main(void)
{
    int a = -5;
    int b = ABS(a);

    printf("The absolute value of %d is %d\n", a, b);

    return (0);
}
