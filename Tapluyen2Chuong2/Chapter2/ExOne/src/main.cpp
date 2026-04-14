#include <stdio.h>
#include <stdlib.h> // Thư viện cho atoi, rand, srand [cite: 541, 547]
#include <math.h>   // Thư viện cho sqrt, pow, M_PI [cite: 556, 562]
#include <time.h>   // Thư viện cho time, ctime [cite: 591, 597]
#include <ctype.h>  // Thư viện cho isalpha, isupper, islower [cite: 608, 610]

void menu();
void viDuSlide30();
void viDuSlide31();
void viDuSlide32();
void viDuSlide33();
void viDuSlide35();
void viDuSlide36();
void viDuSlide37();

int main() {
    int choice;
    while (1) {
        menu();
        printf("\nNhap lua chon cua ban (0 de thoat): ");
        scanf("%d", &choice);
        getchar(); // Xóa bộ nhớ đệm để tránh lỗi khi nhập chuỗi ở các bài sau

        switch (choice) {
            case 1: viDuSlide30(); break;
            case 2: viDuSlide31(); break;
            case 3: viDuSlide32(); break;
            case 4: viDuSlide33(); break;
            case 5: viDuSlide35(); break;
            case 6: viDuSlide36(); break;
            case 7: viDuSlide37(); break;
            case 0: exit(0);
            default: printf("Lua chon khong hop le!\n");
        }
        printf("\n------------------------------------\n");
    }
    return 0;
}

void menu() {
    printf("\n======= MENU CHUONG TRINH CHUONG 2 =======");
    printf("\n1. Toan tu so hoc (Slide 30)");
    printf("\n2. Toan tu quan he (Slide 31)");
    printf("\n3. Toan tu logic (Slide 32)");
    printf("\n4. Toan tu gan (Slide 33)");
    printf("\n5. Thu vien <stdio.h> - printf/scanf (Slide 35)");
    printf("\n6. Thu vien <stdlib.h> - atoi/rand (Slide 36)");
    printf("\n7. Thu vien <math.h> - sqrt (Slide 37)");
    printf("\n0. Thoat");
}

// Slide 30: Toan tu so hoc [cite: 461-473]
void viDuSlide30() {
    int num1, num2;
    printf("[Slide 30] Nhap hai so nguyen: ");
    scanf("%d %d", &num1, &num2);
    printf("Addition: %d\n", num1 + num2);
    printf("Subtraction: %d\n", num1 - num2);
    printf("Multiplication: %d\n", num1 * num2);
    printf("Division: %d\n", num1 / num2);
    printf("Modulus: %d\n", num1 % num2);
}

// Slide 31: Toan tu quan he [cite: 478-489]
void viDuSlide31() {
    int a, b;
    printf("[Slide 31] Nhap hai so de so sanh: ");
    scanf("%d %d", &a, &b);
    if (a > b) printf("%d is greater than %d\n", a, b);
    else if (a < b) printf("%d is less than %d\n", a, b);
    else printf("%d is equal to %d\n", a, b);
}

// Slide 32: Toan tu logic [cite: 493-503]
void viDuSlide32() {
    int num;
    printf("[Slide 32] Nhap mot so: ");
    scanf("%d", &num);
    if (num >= 10 && num <= 50)
        printf("The number is between 10 and 50.\n");
    else
        printf("The number is not in the range.\n");
}

// Slide 33: Toan tu gan hop [cite: 508-519]
void viDuSlide33() {
    int num = 10;
    printf("[Slide 33] Initial value: %d\n", num);
    num += 5; printf("After += 5: %d\n", num);
    num -= 3; printf("After -= 3: %d\n", num);
    num *= 2; printf("After *= 2: %d\n", num);
    num /= 4; printf("After /= 4: %d\n", num);
}

// Slide 35: Thu vien <stdio.h> [cite: 529-538]
void viDuSlide35() {
    printf("[Slide 35] Hello, World!\n");
    char c = 'A';
    putchar(c); // In mot ky tu [cite: 533]
    printf("\nDa in ky tu bang putchar().\n");
}

// Slide 36: Thu vien <stdlib.h> [cite: 541-551]
void viDuSlide36() {
    // Chuyen chuoi thanh so [cite: 549]
    int number = atoi("123");
    printf("[Slide 36] Converted string '123' to integer: %d\n", number);

    // Tao so ngau nhien [cite: 546]
    srand(time(0));
    printf("Random number: %d\n", rand());
}

// Slide 37: Thu vien <math.h> [cite: 556-568]
void viDuSlide37() {
    double x = 16.0;
    // Tinh can bac hai [cite: 566]
    printf("[Slide 37] Square root of %.1f is %.1f\n", x, sqrt(x));
    // Tinh luy thua [cite: 560]
    printf("2 mu 3 la: %.1f\n", pow(2, 3));
}