#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main() {
    char path[512];
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
    FILE *out = fopen("digit.txt", "w");

    int count = 0;
    int ch;

    if (f == NULL || out == NULL) {
        printf("Loi mo file\n");
        return 1;
    }

    while ((ch = fgetc(f)) != EOF) {
        if (isdigit(ch)) {
            count++;
        }
    }

    fprintf(out, "So chu so: %d", count);

    fclose(f);
    fclose(out);

    return 0;
}
