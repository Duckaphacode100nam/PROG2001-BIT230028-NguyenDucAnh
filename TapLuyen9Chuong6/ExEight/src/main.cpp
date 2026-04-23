#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *src, *des;
    int ch;


    src = fopen("source.txt", "r");

    des = fopen("destination.txt", "w");

    if (src == NULL || des == NULL) {
        printf("Loi: Khong mo duoc file!\n");
        return 1;
    }

    while ((ch = fgetc(src)) != EOF) {
        fputc(toupper(ch), des);
    }

    printf("Sao chep va chuyen doi thanh cong!\n");

    fclose(src);
    fclose(des);
    return 0;
}
