#include <stdio.h>

int main() {
    int day;
    printf("nhap 1 so tu 1-7")
    scanf("%d", &day);
    switch (day) {
        case 1:printf("thu hai");  break;
        case 2:printf("thu ba"); break;
        default:printf("khong hop le"); break;
    }

    return 0;
}