#include <stdio.h>

void incrementStatic() {
    static int counter = 0;
    counter++;
    printf("Static counter = %d\n", counter);
}
//
void incrementNormal() {
    int counter = 0;
    counter++;
    printf("Normal counter = %d\n", counter);
}

int main() {
    printf("Static:\n");
    incrementStatic();
    incrementStatic();
    incrementStatic();

    printf("\nNon-static:\n");
    incrementNormal();
    incrementNormal();
    incrementNormal();

    return 0;
}