#include <stdio.h>

int main() {
    int n, rev = 0;
    printf("Nhap so: ");
    scanf("%d", &n);

    while (n != 0) {
        rev = rev * 10 + n % 10;
        n /= 10;
    }

    printf("So dao nguoc = %d\n", rev);
    return 0;
}