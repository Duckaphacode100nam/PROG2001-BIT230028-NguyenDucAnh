#include <stdio.h>

void printDown(int n) {
    if (n <= 0) return;
    printf("%d ", n);
    printDown(n - 1);
}

void printUp(int n) {
    if (n <= 0) return;
    printUp(n - 1);
    printf("%d ", n);
}

int factorial(int n) {
    if (n <= 1) return 1;
    return n * factorial(n - 1);
}

int fibonacci(int n) {
    if (n <= 0) return 0;
    if (n == 1) return 1;
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int sum(int n) {
    if (n <= 0) return 0;
    return n + sum(n - 1);
}

int main() {
    int n = 5;

    printf("Print down: ");
    printDown(n);

    printf("\nPrint up: ");
    printUp(n);

    printf("\nFactorial(%d) = %d", n, factorial(n));
    printf("\nFibonacci(%d) = %d", n, fibonacci(n));
    printf("\nSum(1->%d) = %d\n", n, sum(n));

    return 0;
}
