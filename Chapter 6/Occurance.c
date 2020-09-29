#include<stdio.h>
#include<string.h>

int occurance(char str[], char c){

    char *ptr=str;
    int count=0;

    while(*ptr!='\0'){
        if(*ptr==c){

            count++;
        }

     ptr++;
    }
    return count;
}

int main(){

char st[]="Radheshyam";

int count = occurance(st,'a');
printf("The occurances of 'a' is %d", count);
return 0;

}