#include <stdio.h>

void average(int *a, int *b, int *c, float *result) {
    *result = (*a + *b + *c) / 3.0;
}

int main() {
    int a, b, c;
    float avg;

    printf("Nhap 3 so: ");
    scanf("%d %d %d", &a, &b, &c);

    average(&a, &b, &c, &avg);

    printf("Trung binh = %.2f\n", avg);
    return 0;
}