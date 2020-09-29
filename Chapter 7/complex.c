#include <stdio.h>

typedef struct complex
{
    int real;
    int imaginary;

} comp;

void Complex_number(comp c)
{

    printf("the REAL part of complex no. is %d\n", c.real);

    printf("the IMAGINARY part of complex no. is %d\n", c.imaginary);
}

int main()
{

    comp cnums[5];
    for (int i = 0; i < 5; i++)
    {

        printf("Enter the real part of %d complex number\n", i+1);

            scanf("%d", &cnums[i].real);
    }

    for (int i = 0; i < 5; i++)
    {

        printf("Enter the imaginery part of complex number\n", i+1);

            scanf("%d", &cnums[i].imaginary);
    }
for (int i = 0; i < 5; i++){

    Complex_number(cnums[i]);

}
    
    return 0;
}