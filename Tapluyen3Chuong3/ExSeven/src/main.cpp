#include <stdio.h>

int main() {
    int a, b;
    printf("Nhap a va b: ");
    scanf("%d %d", &a, &b);

    if (b == 0) {
        printf("Loi: khong the chia cho 0\n");
    } else {
        printf("Ket qua = %.2f\n", (float)a / b);
    }

    return 0;
}