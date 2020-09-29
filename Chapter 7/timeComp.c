#include <stdio.h>

typedef struct TimeComp
{

    int hour, minute, second;

} time;

void display(time t1, time t2)
{

    printf("The first given time is-> %d:%d:%d\n", t1);
    printf("The first given time is-> %d:%d:%d\n", t2);
}

int comp(time t1, time t2)
{

    if (t1.hour > t2.hour)
    {
        return 1;
    }

    if (t1.hour < t2.hour)
    {
        return -1;
    }

    if (t1.minute > t2.minute)
    {
        return 1;
    }
    if (t1.minute < t2.minute)
    {
        return -1;
    }

    if (t1.second < t2.second)
    {
        return -1;
    }

    if (t1.second > t2.second)
    {
        return -1;
    }

    else{

        return 0;

    }
}

int main()
{

    time t1 = {2, 20, 56};
    time t2 = {2, 20, 56};

    display(t1, t2);

    int t= comp(t1, t2);

    if(t==1){

        printf("Time T1 is greater than T2\n");
    }

     if(t==-1){

        printf("Time T2 is greater than T1\n");
    }

     if(t==0){

        printf("Time is same\n");
    }

    return 0;
}