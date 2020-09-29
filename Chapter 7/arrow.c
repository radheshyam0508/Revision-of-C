#include <stdio.h>
#include <string.h>

struct arrow
{
    int code;

    float salary;
    char name[20];
};

int main()
{

    struct arrow e1;
    struct arrow *ptr;

    ptr = &e1;

    //(*ptr).code = 101;
    ptr->code=202;
    (*ptr).salary = 20.2;
    //ptr->salary= 20.2;
    strcpy(ptr->name,"Radhe");
    //strcpy(e1.name,"Radhe");

    printf("The emlyee code is %d.\n", ptr->code);

    printf("The emlyee salary is %f.\n", e1.salary);

    printf("The emlyee code is %s.\n", e1.name);

    return 0;
}