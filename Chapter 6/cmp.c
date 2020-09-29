#include <stdio.h>
#include <string.h>

int main()
{

    char str1[] = "Radh";
    char *str2 = "Radhe";
    int val = strcmp(str1, str2);

    printf("The Value of comparison is %d", val);
     return 0;
}