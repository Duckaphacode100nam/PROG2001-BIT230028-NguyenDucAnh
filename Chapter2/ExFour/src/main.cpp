#include <stdio.h>

int main() {
    // 3 biến hợp lệ
    int age = 20;
    float student_score = 9.5;
    char grade1 = 'A';

    // 3 ví dụ không hợp lệ
    // int 1age = 10;      // bắt đầu bằng số
    // float student-score; // chứa dấu -
    // char int = 'B';      // trùng từ khóa

    printf("Hop le: %d, %.1f, %c\n", age, student_score, grade1);

    return 0;
}