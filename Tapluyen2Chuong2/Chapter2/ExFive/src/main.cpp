#include <stdio.h>

int main() {
    int n;
    printf("Nhap n: ");
    scanf("%d", &n);

    if (n >= 10 && n <= 50) {
        printf("Nam trong khoang 10 den 50\n");
    } else {
        printf("Khong nam trong khoang\n");
    }

    return 0;
}