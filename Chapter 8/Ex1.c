#include <Stdio.h>

int main()
{

    int a, b, c;
    FILE *ptr;
    ptr = fopen("Number.txt", "r");

    fscanf(ptr, "%d %d %d", &a, &b, &c);

    printf("The numbers are %d %d %d", a, b, c);

    fclose(ptr);
    return 0;
}