#include <stdio.h>

int main() {
    int a, b;

    scanf("%d %d", &a, &b);

    if (a < b) {
        printf("Small = %d\n", a);
        printf("Large = %d", b);
    } else {
        printf("Small = %d\n", b);
        printf("Large = %d", a);
    }

    return 0;
}