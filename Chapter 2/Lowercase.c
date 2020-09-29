#include <stdio.h>

int main()
{

    char charecter;
    printf("Enter the charecter.\n");
    scanf("%c", &charecter);
    // 97-122 ascii charecter

    if (97 <= charecter && 122>=charecter)
    {

        printf("The entered charecter %c is lower case", charecter);
    }
    else
    {
        printf("The entered charecter is not in lowercase");
    }

    return 0;
}