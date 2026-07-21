#include <stdio.h>

int main() {
    int menu;
    scanf("%d", &menu);
    switch (menu) {
        case 1:
            printf("Hello");
            break;
        case 2:
            printf("Bye");
            break;
        default:
            printf("Invalid");
    }
    return 0;
}