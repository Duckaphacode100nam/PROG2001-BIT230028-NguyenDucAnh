#include <stdio.h>

int main() {
    FILE *f = fopen("data.txt", "w");
    char str[200];

    if (f == NULL) {
        printf("Khong mo duoc file\n");
        return 1;
    }

    printf("Nhap chuoi: ");
    fgets(str, sizeof(str), stdin);

    fprintf(f, "%s", str);

    fclose(f);
    printf("Da ghi file\n");

    return 0;
}