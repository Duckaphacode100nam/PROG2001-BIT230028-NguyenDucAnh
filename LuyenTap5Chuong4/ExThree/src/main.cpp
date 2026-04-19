#include <stdio.h>

int max3(int a, int b, int c) {
    int max = a;
    if (b > max) max = b;
    if (c > max) max = c;
    return max;
}

int main() {
    int a, b, c;
    printf("Nhap 3 so: ");
    scanf("%d %d %d", &a, &b, &c);

    printf("Max = %d\n", max3(a, b, c));
    return 0;
}