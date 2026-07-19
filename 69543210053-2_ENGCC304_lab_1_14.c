#include <stdio.h>

int main() {
    char name[50];
    int number;

    scanf("%s", name);
    scanf("%d", &number);

    printf("+-----------+\n");
    printf("| %s %d |\n", name, number);
    printf("+-----------+\n");

    return 0;
}