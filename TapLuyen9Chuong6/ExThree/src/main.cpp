#include <stdio.h>
#include <string.h>

int main() {
    char path[512];
    int ch;

    strcpy(path, __FILE__);
    char *last_slash = strrchr(path, '\\');
    if (last_slash == NULL) {
        last_slash = strrchr(path, '/');
    }
    if (last_slash != NULL) {
        *last_slash = '\0';
    }

    strcat(path, "\\..\\..\\ExTwo\\src\\data.txt");
    FILE *f = fopen(path, "r");

    if (f == NULL) {
        printf("Khong mo duoc file data.txt\n");
        return 1;
    }

    while ((ch = fgetc(f)) != EOF) {
        printf("%c", ch);
    }

    fclose(f);
    return 0;
}
