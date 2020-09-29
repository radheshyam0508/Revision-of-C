#include <stdio.h>

int main()
{
 char c;
    FILE *fptr;

    fptr = fopen("Read.txt", "r");

    c = fgetc(fptr);

    while (c != EOF)
    {

        printf("%c", c);

        c = fgetc(fptr);
    }
    fclose(fptr);

    return 0;
}