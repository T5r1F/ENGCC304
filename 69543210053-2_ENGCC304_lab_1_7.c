#include <stdio.h>

int main() {
    char name[50];
    char section[20];

    scanf("%s", name);
    scanf("%s", section);

    printf("================\n");
    printf("Name: %s\n", name);
    printf("Section: %s\n", section);
    printf("================\n");

    return 0;
}