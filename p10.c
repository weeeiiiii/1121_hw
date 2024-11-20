#include <stdio.h>

int cubeByReference(int *nPtr)
{
    *nPtr = *nPtr * *nPtr * *nPtr;
}

int main(void)
{
    int number = 5;
    printf("the original value of number is %d",number);

    cubeByReference(&number);

    printf("\nthe new value of number is %d\n",number);
    return 0;
}