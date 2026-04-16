#include <stdio.h>

int main() {
    float a, b;
    printf("Nhap a va b: ");
    scanf("%f %f", &a, &b);

    if (a == 0) {
        if (b == 0)
            printf("Vo so nghiem\n");
        else
            printf("Vo nghiem\n");
    } else {
        printf("x = %.2f\n", -b / a);
    }

    return 0;
}