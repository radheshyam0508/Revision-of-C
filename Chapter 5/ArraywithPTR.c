#include <stdio.h>

int main()
{

    int marks[6];
    int *ptr;
    ptr = &marks[0];

    for (int i = 0; i < 6; i++)
    {

        printf("Enter the value of %d th student\n", i + 1);
        scanf("%d", ptr);
        ptr++;
    }

    for (int i = 0; i < 6; i++)
    {

        printf("The value of marks for the %d th student is %d\n ", i + 1, marks[i]);
    }


return 0;
}
