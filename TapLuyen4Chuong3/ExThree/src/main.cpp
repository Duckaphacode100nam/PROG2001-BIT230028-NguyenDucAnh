#include <stdio.h>

int main() {
    int day;
    printf("Nhap so 1-7: ");
    scanf("%d", &day);

    switch (day) {
        case 1: printf("Thu Hai"); break;
        case 2: printf("Thu Ba"); break;
        case 3: printf("Thu Tu"); break;
        case 4: printf("Thu Nam"); break;
        case 5: printf("Thu Sau"); break;
        case 6: printf("Thu Bay"); break;
        case 7: printf("Chu Nhat"); break;
        default: printf("Khong hop le");
    }

    return 0;
}