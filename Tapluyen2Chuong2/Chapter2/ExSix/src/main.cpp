#include <stdio.h>

int main() {
    int a, b;
    printf("Nhap a va b: ");
    scanf("%d %d", &a, &b);

    printf("Dich trai: %d\n", a << b);
    printf("Dich phai: %d\n", a >> b);

    return 0;
}