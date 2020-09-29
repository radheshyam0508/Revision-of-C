#include <stdio.h>

int main()
{

    int no_Student = 3;
    int no_subjects = 5;

    int marks[3][5];

    for (int i = 0; i < no_Student; i++)
    {
        for (int j=0; j < no_subjects; j++)
        {
            printf("The marks of %d th student in subject %d\n", i + 1, j + 1);
            scanf("%d", &marks[i][j]);
        }

    }

        for (int i = 0; i < no_Student; i++)
        {
            for (int j=0; j < no_subjects; j++)
            {
                printf("The marks of %d th student in subject %d is %d\n ", i + 1, j + 1, marks[i][j]);
            }
        }

        return 0;
    
}