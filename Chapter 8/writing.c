#include <stdio.h>

int main()
{

    int number = 666;

    FILE *fptr;
    fptr = fopen("generated.txt", "w");

    fprintf(fptr, "The lucky numer is %d.\n", number);
    fprintf(fptr, "Thanks For Using C. You are great programmer.");

    fclose(fptr);

    return 0;
}