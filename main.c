#include <stdio.h>

int main(void)
{
    int k;
    long long tien;

    scanf("%d", &k);

    if (k <= 50)
        tien = 1678LL * k;
    else if (k <= 100)
        tien = 83900LL + 1734LL * (k - 50);
    else if (k <= 200)
        tien = 170600LL + 2014LL * (k - 100);
    else if (k <= 300)
        tien = 372000LL + 2536LL * (k - 200);
    else if (k <= 400)
        tien = 625600LL + 2834LL * (k - 300);
    else
        tien = 909000LL + 2927LL * (k - 400);

    printf("%lld\n", tien);

    return 0;
}