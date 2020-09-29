#include <stdio.h>

int main()
{
    int num;
    int Double;

    FILE *ptr;
    ptr = fopen("Integernum.txt", "r");

    fscanf(ptr, "%d", &num);

    Double= 2*num;

    ptr = fopen("Integernum.txt", "w");
    fprintf(ptr, "The double of the number is %d", Double);

    fclose(ptr);

    return 0;
}