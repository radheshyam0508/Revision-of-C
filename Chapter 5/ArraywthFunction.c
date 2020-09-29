#include <stdio.h>

void printArray(int *ptr, int n)
{

    for (int i = 0; i < n; i++)
    {

        printf("The value of %dth element is %d\n", i + 1, *(ptr + i));
    }
}    

    int main()
    {

        int arr[] = {1, 3, 3, 45, 55, 543, 5333, 5543, 66435};
        printArray(arr, 9);

        return 0;
    }
