#include <stdio.h>

struct Employee {
    int id;
    char name[50];
    float salary;
};

int main() {
    int n;
    printf("Nhap so nhan vien: ");
    scanf("%d", &n);

    struct Employee emp[n];

    // Nhập
    for(int i = 0; i < n; i++) {
        printf("\nNhan vien %d:\n", i+1);
        printf("ID: ");
        scanf("%d", &emp[i].id);

        printf("Name: ");
        scanf(" %[^\n]", emp[i].name); // đọc cả dòng

        printf("Salary: ");
        scanf("%f", &emp[i].salary);
    }

    // In
    printf("\nDanh sach nhan vien:\n");
    for(int i = 0; i < n; i++) {
        printf("ID: %d | Name: %s | Salary: %.2f\n",
               emp[i].id, emp[i].name, emp[i].salary);
    }

    return 0;
}