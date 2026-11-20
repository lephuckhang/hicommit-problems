#include <stdio.h>

int main(void)
{
    double d, fare;
    scanf("%lf", &d);

    if (d <= 1.0)
        fare = d * 15000.0;
    else if (d <= 5.0)
        fare = 15000.0 + (d - 1.0) * 13000.0;
    else
        fare = 67000.0 + (d - 5.0) * 11000.0;

    printf("%lld\n", (long long)fare);

    return 0;
}