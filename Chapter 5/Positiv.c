#include <stdio.h>

void positive_no(int *arr, int n)
{
    int counter = 0;

    for (int i = 0; i < n; i++)
    {

        if (arr[i] > 0)
        {
            counter += 1;
        }
    }
    printf("Count of positive number in array is : %d", counter);
}

int main()
{

    int arr[] = {-1, -3, 8, -7, 9,55,86,79,45};

    positive_no(arr, 9);

    return 0;
}
