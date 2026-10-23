#include <stdio.h>

int main(void)
{
    double w, h;
    double can_nang_quy_doi, binh_phuong_chieu_cao;

    scanf("%lf %lf", &w, &h);

    can_nang_quy_doi = w * 10000.0;
    binh_phuong_chieu_cao = h * h;

    if (can_nang_quy_doi < 18.5 * binh_phuong_chieu_cao)
        puts("UNDERWEIGHT");
    else if (can_nang_quy_doi < 25.0 * binh_phuong_chieu_cao)
        puts("NORMAL");
    else if (can_nang_quy_doi < 30.0 * binh_phuong_chieu_cao)
        puts("OVERWEIGHT");
    else
        puts("OBESE");

    return 0;
}