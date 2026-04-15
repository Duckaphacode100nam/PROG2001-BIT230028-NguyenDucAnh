#include <stdio.h>
#include <stdlib.h>

void menu();
void p1();
void p2();
void p3();

// slide11
int globalVar = 100;

void display() {
    printf("Global Variable = %d\n", globalVar);
}

// slide12
void increment() {
    static int counter = 0;
    counter++;
    printf("Counter = %d\n", counter);
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
            case 0: exit(0);
        }
    }
    return 0;
}

void menu() {
    printf("\n1. slide5");
    printf("\n2. slide11");
    printf("\n3. slide12");
    printf("\n0. Thoat");
}

void p1() {
    // slide5
    int x = 10;
    {
        int y = 20;
        printf("Outer block: x=%d, y=%d\n", x, y);
        {
            int z = 30;
            printf("Inner block: x=%d, y=%d, z=%d\n", x, y, z);
        }
    }
    printf("Outside: x=%d\n", x);
}

void p2() {
    // slide11
    printf("Global Variable = %d\n", globalVar);
    display();
}

void p3() {
    // slide12
    increment();
    increment();
    increment();
}
