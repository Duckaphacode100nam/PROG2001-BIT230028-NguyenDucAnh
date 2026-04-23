#include <stdio.h>

int main() {
    FILE *f1, *f2;
    int ch;


    f1 = fopen("file1.txt", "a");

    f2 = fopen("file2.txt", "r");

    if (f1 == NULL || f2 == NULL) {
        printf("Loi mo file!\n");
        return 1;
    }

    while ((ch = fgetc(f2)) != EOF) {
        fputc(ch, f1);
    }

    printf("Da ghep file 2 vao sau file 1 thanh cong.\n");

    fclose(f1);
    fclose(f2);
    return 0;
}
