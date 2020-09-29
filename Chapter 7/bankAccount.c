#include<stdio.h>
#include<string.h>

typedef struct bank{

    int account;
    char name[40], add[50];
    float balance;
    float phone;
    char type[50];


}accou;

int main(){

    struct bank cos1;
    cos1.account= 757575;

    strcpy(cos1.name, "Radhe");
    strcpy(cos1.add,"Chembur");
    
    strcpy(cos1.type, "SAVING");

    cos1.phone= 7710044304;


    printf("The Account no. of %s is %d\n", cos1.name,cos1.account);

    printf("He lives at %s\n", cos1.add);

    printf("We can contact him at %.f\n", cos1.phone);

    printf("The account type is %s", cos1.type);

    return 0;





}