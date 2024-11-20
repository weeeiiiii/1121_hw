#include <stdio.h>

int cubeByValue(int n)
{
    return n * n * n;
}

int main(void)
{
    int number = 5;
    printf("the original value of number is %d",number);

    number = cubeByValue(number);

    printf("\nthe new value of number is %d\n",number);
    return 0;
}