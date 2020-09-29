#include <stdio.h>

int main()
{

    int radius;
    float pi = 3.14;
    int height;

    printf("Enter the Radius of Circle in cm\t");
    scanf("%d", &radius);

    printf("Enter the height in cm\t");
    scanf("%d", &height);

    printf("\nThe area of the circle is %f", pi * radius * radius);
    printf("\nThe volume of the cylender is %f", pi * radius * radius * height);
    return 0;
}