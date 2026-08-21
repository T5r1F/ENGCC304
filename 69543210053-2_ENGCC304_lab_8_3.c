#include <stdio.h>

int main() {
    int a, b, menu;

    scanf("%d %d", &a, &b);
    scanf("%d", &menu);

    if (menu == 1)
        printf("Result = %d", a + b);
    else if (menu == 2)
        printf("Result = %d", a - b);
    else
        printf("Invalid");

    return 0;
}