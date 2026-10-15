#include <stdio.h>

int main(void) {
    // Kiểm tra số chẵn, số lẻ — thử Unicode
    int n;
    scanf("%d", &n);

    if (n % 2 == 0) {
        printf("CHAN\n");//In số chẵn
    } else {
        printf("LE\n");//In số lẻ
    }

    return 0;
}