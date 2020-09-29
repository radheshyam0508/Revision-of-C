#include <stdio.h>

int main()
{

    char c;

    FILE *ptr1;
    FILE *ptr2;
    ptr1 = fopen("Copy.txt", "r");
    ptr2 = fopen("pest.txt", "w");
    
    

    c = fgetc(ptr1);

    // while (c != EOF)
    // {
    //     fprintf(ptr2, "%c", c);
    //     fprintf(ptr2, "%c", c);

    //     c = fgetc(ptr1);
    // }

     while (c != EOF)
    {
        fprintf(ptr2, "%c", c);

        //fprintf(ptr2, "%c", c);

        c = fgetc(ptr1);

    }
     

    fclose(ptr1);
    fclose(ptr2);

    return 0;
}