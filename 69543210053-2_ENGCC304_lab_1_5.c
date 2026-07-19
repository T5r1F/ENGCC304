#include <stdio.h>

int main() {
    char hardware[50];
    char software[50];

    scanf("%s", hardware);
    scanf("%s", software);

    printf("Hardware: %s\n", hardware);
    printf("Software: %s\n", software);
    printf("Both work together.\n");

    return 0;
}