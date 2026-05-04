#include <stdio.h>

int main() {
    int n, sum = 0;
    printf("Nhap N: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        sum += (2 * i + 1);
    }

    printf("Tong = %d", sum);
    return 0;
}