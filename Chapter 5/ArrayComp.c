#include<stdio.h>

int main(){

int arr[10];
int *ptr= arr;
ptr= ptr+2;


if(&arr[2]==ptr){

    printf("The memory loction is same");

}
else{
    printf("Location is not same");
}

return 0;

}