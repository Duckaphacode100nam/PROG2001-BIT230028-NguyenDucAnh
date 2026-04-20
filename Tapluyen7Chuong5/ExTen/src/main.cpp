#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    fgets(str, sizeof(str), stdin);

    int len = strlen(str);

    for(int i = 0; i < len/2; i++) {
        char temp = str[i];
        str[i] = str[len-i-1];
        str[len-i-1] = temp;
    }

    printf("Dao nguoc: %s", str);
}