#include <stdio.h>

int main() {
    int n;
    printf("Nhap so nguyen: ");
    scanf("%d", &n);

    float f = (float)n;
    int back = (int)f;

    printf("So thuc: %.2f\n", f);
    printf("Ep nguoc lai int: %d\n", back);

    return 0;
}