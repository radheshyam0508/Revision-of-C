#include <stdio.h>
#include <string.h>

int checkstring(char str[], char c)
{

    char *st = str;
    int count =0;

    while (*st != '\0')
    {

        if (*st == c)
        {

            count++;
        }
        st++;
    }
    if (count!=0){
        printf("The given charecter is avilable");
    }
    else{

        printf("Not");
    }

}
int main()
    {

        char st[] = "Radheshyam";
        checkstring(st, 'R');
        return 0;
    }