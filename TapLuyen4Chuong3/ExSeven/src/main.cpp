#include <stdio.h>

int main() {
    int n;

    do {
        printf("Nhap so trong khoang 1-100: ");
        scanf("%d", &n);
    } while (n < 1 || n > 100);

    printf("Ban nhap dung: %d\n", n);

    return 0;
}