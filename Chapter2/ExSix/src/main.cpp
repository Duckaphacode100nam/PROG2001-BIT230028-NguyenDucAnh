#include <stdio.h>
#include <stdbool.h>

int main() {
    int age;
    float gpa;
    char grade;
    int password;

    printf("Your age: ");
    scanf("%d", &age);

    printf("Your gpa: ");
    scanf("%f", &gpa);

    printf("Your grade: ");
    scanf(" %c", &grade);

    printf("Your password: ");
    scanf("%d", &password);

    printf("%d, %.1f, %c, %d\n", age, gpa, grade, password);

    return 0;
}