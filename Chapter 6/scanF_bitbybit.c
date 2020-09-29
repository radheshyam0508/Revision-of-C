#include<stdio.h>
#include<string.h>

int main(){

char st1[34];
char st2[34];
char d;
int i=0;

printf("Enter the first String:\n");
scanf("%s",&st1);

printf("Enter the string bit by bit:");

while(d!='\n'){
fflush(stdin);
scanf("%c", &d);

st2[i]= d;

i++;
}

st2[i-1]='\0';

printf("The value of st1 is %s\n",st1);
printf("The value of st2 is %s\n",st2);

printf("strcmp value for the give input is %d", strcmp(st1,st2));






    return 0;
}