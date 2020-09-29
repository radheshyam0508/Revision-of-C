#include <stdio.h>
#include<string.h>

void encryption(char *ptr)
{

    char *c = ptr;
    while (*c != '\0')
    {

        *c = *c + 1;
        c++;
    }
}

    int main()
    {

        char st[]="Radhe I Love You";

        encryption(st);
        printf("Encrypted value:%s\n", st);

        return 0;
    }
