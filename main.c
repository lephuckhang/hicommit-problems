#include <stdio.h>

int main(void)
{
    double gpa, min_score;
    int absences;

    scanf("%lf %lf %d", &gpa, &min_score, &absences);

    if (absences > 3)
        puts("FAIL_ATTENDANCE");
    else if (min_score < 4.0)
        puts("FAIL_SUBJECT");
    else if (gpa >= 8.0 && min_score >= 7.0)
        puts("EXCELLENT");
    else if (gpa >= 6.5 && min_score >= 5.0)
        puts("GOOD");
    else if (gpa >= 5.0 && min_score >= 4.0)
        puts("PASS");
    else
        puts("FAIL");

    return 0;
}