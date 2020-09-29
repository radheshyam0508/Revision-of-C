#include<stdio.h>

int main(){

char a[30];
int salary;

printf("Enter the Name of employee\n");
scanf("%s", &a);

printf("Enter the salary of Employee\n");

scanf("%d", &salary);

FILE *ptr;
ptr=fopen("ListofEmployee.txt","w");

fprintf(ptr, "%s, %d", a, salary);

return 0;

}