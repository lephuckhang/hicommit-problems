#include <stdio.h>

int main(void)
{
    int d, m, y, days, leap;
    scanf("%d %d %d", &d, &m, &y);

    if (y <= 0 || m < 1 || m > 12 || d < 1)
    {
        puts("INVALID");
        return 0;
    }

    leap = (y % 400 == 0)
        || (y % 4 == 0 && y % 100 != 0);

    if (m == 2)
    {
        if (leap)
            days = 29;
        else
            days = 28;
    }
    else if (m == 4 || m == 6 || m == 9 || m == 11)
        days = 30;
    else
        days = 31;

    if (d <= days)
        puts("VALID");
    else
        puts("INVALID");

    return 0;
}