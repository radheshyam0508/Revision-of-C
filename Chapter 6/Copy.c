#include <stdio.h>
#include <string.h>

int main()
{

    char str[] = "HariomBapu";

    char str2[45];

    strcpy(str2, str);

    printf("The value at str2 is %s", str2);

    return 0;
}