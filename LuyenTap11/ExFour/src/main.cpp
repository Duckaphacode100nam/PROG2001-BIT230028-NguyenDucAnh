#include <stdio.h>

int main() {
    int n, i, flag = 1;

    printf("Nhap N: ");
    scanf("%d", &n);

    if (n < 2) {
        printf("Khong phai so nguyen to");
        return 0;
    }

    for (i = 2; i < n; i++) {
        if (n % i == 0) {
            flag = 0;
            break;
        }
    }

    if (flag == 1)
        printf("La so nguyen to");
    else
        printf("Khong phai so nguyen to");

    return 0;
}