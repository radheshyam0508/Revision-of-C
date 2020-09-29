#include <stdio.h>

int main()
{
    int num;
    printf("Enter the number for which you want a Multiplication table.\n");
    scanf("%d", &num);

    FILE *ptr;
    ptr = fopen("MultiplicationTable.txt", "w");

    fprintf(ptr, "****The Multiplication Table for %d is ****\n", num);

    for (int i = 0; i < 10; i++)
    {
        fprintf(ptr, "%d X %d = %d\n", num, i + 1, num * (i + 1));
    }
    fclose(ptr);

    return 0;
}