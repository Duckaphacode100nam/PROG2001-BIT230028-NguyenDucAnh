#include <stdio.h>

int main() {
    int a, b, c, max;
    printf("Nhap 3 so: ");
    scanf("%d %d %d", &a, &b, &c);

    max = a;

    if (b > max) {
        max = b;
    }

    if (c > max) {
        max = c;
    }

    printf("So lon nhat: %d\n", max);

    return 0;
}