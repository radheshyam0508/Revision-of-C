#include <stdio.h>

int main()
{
    int i ;
    printf("enter i\n");
    scanf("%d", &i);
    do
    {
        printf("%d\n", i+1);
        i++;

    } while (i<4);
    
    return 0;
}