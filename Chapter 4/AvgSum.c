#include <stdio.h>

void sumAvg(int a, int b, int *sum, float *avg)
{
    *sum = a + b;
    *avg = (float)(*sum) / 2;
}

int main()
{
    int i = 10, j =1;
    int sum;
    float avg;
    sumAvg(i, j, &sum, &avg);

    printf("The sum of i and j is %d\n", sum);
    printf("The Average of i and j is %f", avg);

    return 0;
}