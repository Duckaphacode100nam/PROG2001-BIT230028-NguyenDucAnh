#include <stdio.h>

int main() {
    float diem;
    printf("Nhap diem: ");
    scanf("%f", &diem);

    if (diem >= 9 && diem <= 10)
        printf("Xuat sac");
    else if (diem >= 8)
        printf("Gioi");
    else if (diem >= 6.5)
        printf("Kha");
    else if (diem >= 5)
        printf("Trung binh");
    else if (diem >= 0)
        printf("Yeu");
    else
        printf("Diem khong hop le");

    return 0;
}