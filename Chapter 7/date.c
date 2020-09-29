#include <stdio.h>

typedef struct compDate
{

    int date, month, year;
} date;

void display(date d1, date d2)
{

    printf("First date is %d/%d/%d.\n", d1);
    printf("First date is %d/%d/%d.\n", d2);
}

int comp(date d1, date d2)
{

    if (d1.date > d2.date)
    {
        return 1;
    }

    if (d1.date < d2.date)
    {
        return -1;
    }

    if (d1.month > d2.month)
    {
        return 1;
    }

    if (d1.month < d2.month)
    {
        return -1;
    }

    if (d1.year > d2.year)
    {
        return 1;
    }

    if (d1.year < d2.year)
    {
        return -1;
    }

    else
    {

        return 0;
    }
}

int main()
{
    date d1 = {5, 8, 2000};

    date d2 = {5, 8, 1989};

    display(d1, d2);

    int d = comp(d1, d2);

    //printf("%d", d);

    if (d == 1)
    {
        printf("Date d1 containe earlier date than Date d2.\n");
    }

    if (d == -1)
    {
        printf("Date d2 containe earlier date than Date d1.\n");
    }

    if (d == 0)
    {
        printf("Dates are same.\n");
    }

    return 0;
}
