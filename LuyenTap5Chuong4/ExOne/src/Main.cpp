#include <stdio.h>
#include <stdlib.h>

#define PI 3.14159 // slide28

void menu();
void p1();
void p2();
void p3();
void p4();
void p5();
void p6();
void p7();

// slide15
int add_v1(int a, int b) {
    return a + b;
}

// slide17
void swap(int *x, int *y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}

// slide19
int findMax(int a, int b, int c) {
    if (a > b && a > c) return a;
    else if (b > c) return b;
    else return c;
}

// slide24
void printMessage() {
    printf("Hello, this is a message from a void function!\n");
}

// slide26
int add_v2(int a, int b) {
    return a + b;
}

// slide28
float calculateArea(float radius) {
    return PI * radius * radius;
}

// slide30
void modifyArray(int* arr, int size) {
    for (int i = 0; i < size; i++) {
        arr[i] *= 2;
    }
}

int main() {
    int choice;
    while (1) {
        menu();
        printf("\nChon: ");
        if (scanf("%d", &choice) != 1) break;
        getchar();

        switch (choice) {
            case 1: p1(); break;
            case 2: p2(); break;
            case 3: p3(); break;
            case 4: p4(); break;
            case 5: p5(); break;
            case 6: p6(); break;
            case 7: p7(); break;
            case 0: exit(0);
        }
    }
    return 0;
}

void menu() {
    printf("\n1. slide15 (Add numbers)");
    printf("\n2. slide17 (Swap numbers)");
    printf("\n3. slide19 (Find Max)");
    printf("\n4. slide24 (Void message)");
    printf("\n5. slide26 (Primitive sum)");
    printf("\n6. slide28 (Circle area)");
    printf("\n7. slide30 (Modify array)");
    printf("\n0. Thoat");
}

void p1() {
    // slide15
    int n1 = 5, n2 = 10;
    int sum = add_v1(n1, n2);
    printf("The sum of %d and %d is: %d\n", n1, n2, sum);
}

void p2() {
    // slide17
    int a = 5, b = 10;
    printf("Before: a=%d, b=%d\n", a, b);
    swap(&a, &b);
    printf("After: a=%d, b=%d\n", a, b);
}

void p3() {
    // slide19
    int n1 = 12, n2 = 25, n3 = 18;
    int max = findMax(n1, n2, n3);
    printf("The largest is: %d\n", max);
}

void p4() {
    // slide24
    printMessage();
}

void p5() {
    // slide26
    int num1 = 3, num2 = 7;
    int result = add_v2(num1, num2);
    printf("Sum: %d\n", result);
}

void p6() {
    // slide28
    float r = 5.5;
    float area = calculateArea(r);
    printf("Area with radius %.2f is: %.2f\n", r, area);
}

void p7() {
    // slide30
    int numbers[] = {1, 2, 3, 4, 5};
    int size = 5;
    printf("Original: ");
    for(int i=0; i<size; i++) printf("%d ", numbers[i]);
    modifyArray(numbers, size);
    printf("\nModified: ");
    for(int i=0; i<size; i++) printf("%d ", numbers[i]);
    printf("\n");
}