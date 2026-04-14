#include <stdio.h>

int main() {
    int x;
    printf("Nhap x: ");
    scanf("%d", &x);

    x += 5;
    printf("Sau +=5: %d\n", x);

    x -= 3;
    printf("Sau -=3: %d\n", x);

    x *= 2;
    printf("Sau *=2: %d\n", x);

    x /= 4;
    printf("Sau /=4: %d\n", x);

    return 0;
}