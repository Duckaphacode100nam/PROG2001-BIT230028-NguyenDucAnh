#include <stdio.h>

int main() {
    int a, b, c, min;
    printf("Nhap 3 so: ");
    scanf("%d %d %d", &a, &b, &c);

    min = a;

    if (b < min) min = b;
    if (c < min) min = c;

    printf("So nho nhat = %d\n", min);
    return 0;
}