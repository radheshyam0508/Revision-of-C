#include <stdio.h>
#include <stdlib.h>

int main()
{

    float *ptr;
    ptr = (float *)malloc(6 * sizeof(float));

    for (int i = 0; i < 6; i++)
    {

        printf("Enter the %d number\n", i + 1);
        scanf("%f", &ptr[i]);
    }

    for (int i = 0; i < 6; i++)
    {

        printf("The %d number is %.2f\n", i + 1, ptr[i]);
    }

    return 0;
}