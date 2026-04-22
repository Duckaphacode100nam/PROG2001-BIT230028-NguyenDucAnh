#include <stdio.h>

int main() {
    // Tạo file cùng thư mục project
    FILE *f1 = fopen("file1.txt", "w");

    // Tạo file ở ổ C
    FILE *f2 = fopen("C:test_file.txt", "w");

    if (f1 == NULL || f2 == NULL) {
        printf("Loi tao file\n");
        return 1;
    }

    printf("Tao file thanh cong\n");

    fclose(f1);
    fclose(f2);

    return 0;
}