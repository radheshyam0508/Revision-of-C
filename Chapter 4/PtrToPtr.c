#include<stdio.h>

int main(){

    int i =6000000;
    int *ptr;
    int **ptr_ptr;
    ptr = &i;
    ptr_ptr= &ptr;

    printf("The value of i is %d", **ptr_ptr);






    return 0;
}