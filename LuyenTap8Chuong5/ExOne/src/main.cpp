#include <stdio.h>


struct Student {
    char mssv[20];
    char name[50];
};

int main() {

    struct Student s = {"BIT230028", "Duc Anh"};

    printf("MSSV: %s\n", s.mssv);
    printf("Name: %s\n", s.name);

    return 0;
}
