#include <stdio.h>
#include <string.h>

int main() {
    char str[100];

    printf("Nhap chuoi: ");
    fgets(str, sizeof(str), stdin);

    printf("Chuoi: %s", str);
    printf("Do dai = %lu\n", strlen(str));
}