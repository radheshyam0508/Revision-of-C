#include<stdio.h>
#include<string.h>

void decryption(char *ptr){

    char *c= ptr;

    while(*c!='\0'){

        *c = *c-1;
        c++;
    }
}

int main(){
char st[]="Sbeif!J!Mpwf!Zpv";
decryption(st);
printf("The decrypted value : %s", st);

return 0;

}