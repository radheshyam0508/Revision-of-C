#include <stdio.h>

int main()
{

    float celsius = 37;
    float far;
    far = (celsius * 9 / 5) + 32;

    // printf("Enter the value of temperature in celsius\t");
    // scanf("%f", celsius);

    printf("Conversition of tempearture from celsius to fahrenheit is %f", (celsius * 9 / 5) + 32);
    return 0;
}