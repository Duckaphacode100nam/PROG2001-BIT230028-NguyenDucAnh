#include <stdio.h>

// Owner
struct Owner {
    char name[50];
    int age;
};

// Car chứa Owner (nested struct)
struct Car {
    char model[50];
    int year;
    struct Owner owner;
};

int main() {
    struct Car car = {
        "Toyota",
        2020,
        {"Duc Anh", 20}
    };

    printf("Model: %s\n", car.model);
    printf("Year: %d\n", car.year);
    printf("Owner: %s\n", car.owner.name);
    printf("Age: %d\n", car.owner.age);

    return 0;
}