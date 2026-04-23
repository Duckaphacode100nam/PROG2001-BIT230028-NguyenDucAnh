#include <stdio.h>

int main() {
    FILE *fptr;
    int id;
    char name[50];
    float grade;


    fptr = fopen("data.txt", "r");
    if (fptr == NULL) {
        printf("Loi: Khong the mo file!\n");
        return 1;
    }


    while (fscanf(fptr, "%d %s %f", &id, name, &grade) != EOF) {
        printf("ID: %d, Ten: %s, Diem: %.2f\n", id, name, grade);
    }

    fclose(fptr);
    return 0;
}
