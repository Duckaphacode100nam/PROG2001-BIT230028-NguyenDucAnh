#include <stdio.h>

int main() {
    int a, b;
    printf("Nhap a va b: ");
    scanf("%d %d", &a, &b);

    printf("Cong: %d\n", a + b);
    printf("Tru: %d\n", a - b);
    printf("Nhan: %d\n", a * b);
    printf("Chia: %d\n", a / b);
    printf("Chia du: %d\n", a % b);

    return 0;
}