#include <stdio.h>

int main(void)
{
    double dtb, drl;
    scanf("%lf %lf", &dtb, &drl);

    if (dtb >= 9.0 && drl >= 90.0)
        puts("HOC_BONG_XUAT_SAC");
    else if (dtb >= 8.0 && drl >= 80.0)
        puts("HOC_BONG_GIOI");
    else if (dtb >= 7.0 && drl >= 70.0)
        puts("HOC_BONG_KHA");
    else
        puts("KHONG_DAT");

    return 0;
}