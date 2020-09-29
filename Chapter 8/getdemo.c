#include <stdio.h>

int main()
{
    FILE *ptr;
    //ptr = fopen("Getdocuments.txt", "r");

    //char c = fgetc(ptr);

    // printf("The first charecter is %c\n", fgetc(ptr));
    // printf("The first charecter is %c\n", fgetc(ptr));
    // printf("The first charecter is %c\n", fgetc(ptr));

    ptr = fopen("Cdocuments.txt", "w");
    fputc('h', ptr);
     fputc('h', ptr);
      fputc('h', ptr);

    fclose(ptr);

    return 0;
}