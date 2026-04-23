#include <stdio.h>

int main() {
    FILE *fptr;
    int numbers[] = {10, 20, 30, 40, 50};
    int read_nums[5] = {0};
    int is_same = 1;

    fptr = fopen("array.bin", "wb");
    if (fptr == NULL) {
        printf("Khong mo duoc file de ghi.\n");
        return 1;
    }

    fwrite(numbers, sizeof(int), 5, fptr);
    fclose(fptr);

    fptr = fopen("array.bin", "rb");
    if (fptr == NULL) {
        printf("Khong mo duoc file de doc.\n");
        return 1;
    }

    fread(read_nums, sizeof(int), 5, fptr);
    fclose(fptr);

    printf("Mang ghi vao : ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", numbers[i]);
    }
    printf("\n");

    printf("Mang doc ra   : ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", read_nums[i]);
        if (numbers[i] != read_nums[i]) {
            is_same = 0;
        }
    }
    printf("\n");

    if (is_same) {
        printf("Ket qua: mang doc ra dung voi mang da ghi.\n");
    } else {
        printf("Ket qua: mang doc ra KHONG dung.\n");
    }

    return 0;
}
