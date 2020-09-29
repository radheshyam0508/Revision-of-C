#include <stdio.h>

struct Vector
{
    int x;
    int y;
};

struct Vector SumVector(struct Vector v1, struct Vector v2){
struct  Vector result;
result.x= v1.x+v2.x;
result.y= v1.y+v2.y;

return result;

    
}

int main()
{

    struct Vector v1, v2,sum;

    v1.x = 22;
    v1.y = 23;

    printf("The value of x is %d and value of y is %d.\n", v1.x, v1.y);

    v2.x = 202;
    v2.y = 230;

    printf("The value of x is %d and value of y is %d.\n", v2.x, v2.y);

    sum= SumVector(v1,v2);

    printf("%d %d", sum.x, sum.y);



    return 0;
}
