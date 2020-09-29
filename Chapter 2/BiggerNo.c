#include<stdio.h>

int main(){
double a, b, c, d;
printf("Enter number a\n");
scanf("%lf",&a);

printf("Enter number b\n");
scanf("%lf",&b);

printf("Enter number c\n");
scanf("%lf",&c);

printf("Enter number d\n");
scanf("%lf",&d);

if(a>b && a>c && a>d){

    printf("%.2f is the largest number", a);
} 
 if(b>a && b>c && b>d){

    printf("%.2f is the largest number", b);
} 

if(c>a && c>b && c>d){

    printf("%.2f is the largest number", c);
} 

if(d>a && d>b && d>c){

    printf("%.2f is the largest number", d);
} 

else{

    printf("All the numbers are equal");
}


    return 0;
}