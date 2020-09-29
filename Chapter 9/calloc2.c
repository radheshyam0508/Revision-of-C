#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ptr;

    int n;

    ptr = (int *)calloc(n, sizeof(int));
    printf("Enter the number of integer you want to store.\n");
    scanf("%d", &n);

    

    for (int i = 0; i < n; i++)
    {

        printf("Enter the %d integer\n", i + 1);
        scanf("%d", &ptr[i]);
    }

    for (int i = 0; i < n; i++)
    {

        printf("the %d integer is %d\n", i + 1, ptr[i]);
    }
    return 0;
}