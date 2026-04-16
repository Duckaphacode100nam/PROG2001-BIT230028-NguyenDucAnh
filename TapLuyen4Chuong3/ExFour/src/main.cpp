#include <stdio.h>

int main() {
    int n, i, sum = 0;
    printf("Nhap n: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        sum += i;
    }

    printf("Tong = %d\n", sum);
    return 0;
}