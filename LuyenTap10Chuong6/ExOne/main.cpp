#include <stdio.h>
#include <string.h>

typedef struct {
    char name[50];
    int age;
} Student;

int main() {
    FILE *fptr;
    Student s1 = {"Alice", 20};
    Student s_read = {"", 0};

    fptr = fopen("student.dat", "wb");
    if (fptr == NULL) {
        printf("Khong mo duoc file de ghi.\n");
        return 1;
    }

    fwrite(&s1, sizeof(Student), 1, fptr);
    fclose(fptr);

    fptr = fopen("student.dat", "rb");
    if (fptr == NULL) {
        printf("Khong mo duoc file de doc.\n");
        return 1;
    }

    fread(&s_read, sizeof(Student), 1, fptr);
    fclose(fptr);

    printf("Gia tri ghi vao : Name = %s, Age = %d\n", s1.name, s1.age);
    printf("Gia tri doc ra  : Name = %s, Age = %d\n", s_read.name, s_read.age);

    if (strcmp(s1.name, s_read.name) == 0 && s1.age == s_read.age) {
        printf("Ket qua: du lieu doc ra dung voi du lieu da ghi.\n");
    } else {
        printf("Ket qua: du lieu doc ra KHONG dung.\n");
    }

    return 0;
}
