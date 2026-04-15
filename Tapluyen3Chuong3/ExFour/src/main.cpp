#include <stdio.h>

int main() {
    int x = 50;

    {
        printf("Access outer x from inner block = %d\n", x);
    }

    return 0;
}