#include <stdio.h>
#include <string.h>
#include <time.h>
#include <ctype.h>
#include <stdlib.h>

void menu();
void p1();
void p2();
void p3();

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
    printf("\n1. string.h");
    printf("\n2. time.h");
    printf("\n3. ctype.h");
    printf("\n0. Thoat");
}

void p1() {
    char str1[50] = "Hello";
    char str2[] = "world";
    strcat(str1, str2);
    printf("%s\n", str1);
    printf("%zu\n", strlen(str1));
}

void p2() {
    time_t current_time;
    time(&current_time);
    printf("%s", ctime(&current_time));
}

void p3() {
    char c;
    scanf("%c", &c);
    if (isalpha(c)) {
        printf("Letter\n");
        printf("%c\n", toupper(c));
    } else if (isdigit(c)) {
        printf("Digit\n");
    }
}
