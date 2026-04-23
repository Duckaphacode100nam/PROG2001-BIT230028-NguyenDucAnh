#include <stdio.h>
#include <string.h>

typedef struct {
    char name[50];
    double price;
} Product;

int main() {
    FILE *fptr;
    Product list[2] = {{"Laptop", 1500.0}, {"Mouse", 25.5}};
    Product read_list[2] = {0};
    int is_same = 1;

    fptr = fopen("products.dat", "wb");
    if (fptr == NULL) {
        printf("Khong mo duoc file de ghi.\n");
        return 1;
    }

    fwrite(list, sizeof(Product), 2, fptr);
    fclose(fptr);

    fptr = fopen("products.dat", "rb");
    if (fptr == NULL) {
        printf("Khong mo duoc file de doc.\n");
        return 1;
    }

    fread(read_list, sizeof(Product), 2, fptr);
    fclose(fptr);

    for (int i = 0; i < 2; i++) {
        printf("Product %d ghi vao: %s - %.2f\n", i + 1, list[i].name, list[i].price);
        printf("Product %d doc ra : %s - %.2f\n", i + 1, read_list[i].name, read_list[i].price);

        if (strcmp(list[i].name, read_list[i].name) != 0 || list[i].price != read_list[i].price) {
            is_same = 0;
        }
    }

    if (is_same) {
        printf("Ket qua: mang struct Product doc ra dung voi du lieu da ghi.\n");
    } else {
        printf("Ket qua: mang struct Product doc ra KHONG dung.\n");
    }

    return 0;
}
