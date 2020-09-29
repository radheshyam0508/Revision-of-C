#include <stdio.h>

int strlen(char *st)
{

    char *ptr = st;

    int i = 0;

    while (*ptr != '\0')
    {
        i++;
        ptr++;
    }

    return i;
}

int main()
{

    int l;

    char st[] = "RadheManu";
    l = strlen(st);

    printf("The length of the string is %d", l);

    return 0;
}