#include<stdio.h>

struct Vector
{
    int x;
    int y;
};

int main(){

struct Vector v1,v2;

v1.x=22;
v1.y=23;

printf("The value of x is %d and value of y is %d.\n", v1.x,v1.y);

v2.x=202;
v2.y=230;

printf("The value of x is %d and value of y is %d.\n", v2.x,v2.y);                                                

return 0;



}

