#include<stdio.h>
void rswap(int *a, int *b);
void Wrongswap(int a, int b);

int main(){
    int x=3, y=4;

    printf("the value of x and y is %d and % d\n", x, y);

    // after swap
    
    //Wrongswap(x,y);
    rswap(&x, &y);


    printf("The value of x and y after swap is %d and %d\n", x, y);
return 0;
}

void Wrongswap(int a, int b){

int temp;
temp=a;
a = b;
b= temp;
}

void rswap(int *a, int *b){

int temp;
temp=*a;
*a = *b;
*b= temp;

}