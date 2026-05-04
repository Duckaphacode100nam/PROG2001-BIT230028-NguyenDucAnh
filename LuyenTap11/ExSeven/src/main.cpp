#include <stdio.h>

struct Product {
    char name[50];
    float price;
};

int main() {
    struct Product p1, p2;

    printf("Nhap san pham 1:\n");
    printf("Ten: ");
    scanf("%s", p1.name);

    printf("Gia: ");
    scanf("%f", &p1.price);

    printf("\nNhap san pham 2:\n");
    printf("Ten: ");
    scanf("%s", p2.name);

    printf("Gia: ");
    scanf("%f", &p2.price);

    if (p1.price > p2.price)
        printf("San pham 1 dat hon");
    else if (p1.price < p2.price)
        printf("San pham 2 dat hon");
    else
        printf("Hai san pham co gia bang nhau");

    return 0;
}