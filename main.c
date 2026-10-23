#include <stdio.h>

int main(void)
{
    double dtb;
    scanf("%lf", &dtb);

    if (dtb >= 9.0)
        puts("A");
    else if (dtb >= 8.0)
        puts("B+");
    else if (dtb >= 7.0)
        puts("B");
    else if (dtb >= 6.5)
        puts("C+");
    else if (dtb >= 5.5)
        puts("C");
    else if (dtb >= 5.0)
        puts("D+");
    else if (dtb >= 4.0)
        puts("D");
    else
        puts("F");

    return 0;
}