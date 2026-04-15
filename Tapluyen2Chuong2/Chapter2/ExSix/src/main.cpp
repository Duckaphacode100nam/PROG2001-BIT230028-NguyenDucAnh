#include <stdio.h>

int main() {
    int a, b;
    printf("nhap so nguyen a va b:");
    scanf("%d %d", &a, &b);

    printf("dich trai %d\n ", a << b);
    printf("dich phai %d\n ", a >> b);
}