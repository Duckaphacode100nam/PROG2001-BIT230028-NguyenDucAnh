#include <stdio.h>

int main() {
    int n, sum = 0;
    printf("Nhap n: ");
    scanf("%d", &n);

    int a[n];
    for(int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
        sum += a[i];
    }

    printf("Tong = %d\n", sum);
    return 0;
}