#include <stdio.h>

int main() {
    char studentId[20];
    char name[50];
    int age;

    scanf("%s", studentId);
    scanf("%s", name);
    scanf("%d", &age);

    printf("Student ID: %s\n", studentId);
    printf("Name: %s\n", name);
    printf("Age: %d\n", age);

    return 0;
}