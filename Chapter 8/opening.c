#include <stdio.h>

int main()
{

    FILE *ptr;
    ptr = fopen("Radhe.txt", "r");

    int num1, num2, num3, num4;

    if (ptr == NULL)
    {

        printf("File Does not exit.\n");
    }

    else
    {

        fscanf(ptr, "%d %d %d %d", &num1, &num2, &num3, &num4);
        printf("The numbers are %d %d %d %d", num1, num2, num3, num4);
    }

    fclose(ptr);
    return 0;
}