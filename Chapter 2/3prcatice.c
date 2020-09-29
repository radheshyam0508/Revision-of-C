#include <stdio.h>

int main()
{
    int math, english, science, total;
    float percentage;

    printf("Enter markes obtained in maths out of 100\n");
    scanf("%d", &math);

    printf("Enter markes obtained in english out of 100\n");
    scanf("%d", &english);

    printf("Enter markes obtained in science out of 100\n");
    scanf("%d", &science);

    total = math + english + science;
    percentage = (total / 3);

    if (math <33 || english<33 || science <33 || percentage < 40)
    {
        printf("You are fail with the percentage %f", percentage);
    }
    else
    {

        printf("You are pass with the %f percentage", percentage);
    }

    return 0;
}