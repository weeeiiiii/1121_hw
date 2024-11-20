#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define ROLLS 36000

int main() {
    int count[13] = {0}; 
    int die1, die2, sum;

    srand(time(NULL)); 

    for (int i = 0; i < ROLLS; i++) 
    {
        die1 = rand() % 6 + 1; 
        die2 = rand() % 6 + 1; 
        sum = die1 + die2;
        count[sum]++; //count[sum] = count[sum] + 1;
    }

    
    printf("Sum\tFrequency\n");
    for (int i = 2; i <= 12; i++) 
    {
        printf("%d\t%d\n", i, count[i]);//印出2~12骰出的次數
    }


    double probability = (double)count[7] / ROLLS;
    printf("\nProbability of sum 7: %.5f (Expected: ~0.16667)\n", probability);

    return 0;
}
