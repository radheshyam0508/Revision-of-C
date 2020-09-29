#include <stdio.h>

void mulTable(int *table, int num, int n)
{
   
    for (int i = 0; i < n; i++)
    {

        table[i] = num * (i + 1);
    }

    for (int i = 0; i < n; i++)
    {

        printf("%d X %d=%d\n", num, i + 1, table[i]);
       
    }
     printf("*****************************************\n");
}

int main()
{
    int x, y;
    printf("Enter the number for which you want the Table:\t");
    scanf("%d", &x);

    printf("Enter the number till which you want the Table to be printed:\t");
    scanf("%d", &y);

    

    int table[x][y];
    printf("The Table for %d\n", x);
    mulTable(table[0], x, y);

    return 0;
}
