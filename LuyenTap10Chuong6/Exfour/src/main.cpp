#include <stdio.h>

int main() {
    FILE *fptr;
    int value = 12345;
    int read_val = 0;

    fptr = fopen("example.dat", "wb+");
    if (fptr == NULL) {
        printf("Khong mo duoc file binary.\n");
        return 1;
    }

    fseek(fptr, 20, SEEK_SET);
    fwrite(&value, sizeof(int), 1, fptr);

    fseek(fptr, 20, SEEK_SET);
    fread(&read_val, sizeof(int), 1, fptr);

    printf("Gia tri ghi vao : %d\n", value);
    printf("Gia tri doc ra  : %d\n", read_val);
    if (value == read_val) {
        printf("Ket qua: gia tri doc ra dung voi gia tri da ghi.\n");
    } else {
        printf("Ket qua: gia tri doc ra KHONG dung.\n");
    }

    printf("Vi tri con tro sau khi doc: %ld\n", ftell(fptr));
    fclose(fptr);

    return 0;
}
