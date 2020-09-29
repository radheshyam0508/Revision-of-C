#include<stdio.h>

int sum(int a, int b);


int main(){
    int a=4, b=7;
    printf("Enter the value of a and b are %d and %d\n", a,b);
    printf("The Value of a+b is %d\n", sum(a,b));
    printf("The value of a and b after the function call are %d and %d\n", a, b);



    return 0;
}

int sum(int a, int b){

    int c;
    c=a+b;
    a=54545;
    b=45665;

    return c;

}