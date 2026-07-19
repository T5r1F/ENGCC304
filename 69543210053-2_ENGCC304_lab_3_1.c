#include <stdio.h>

int main() {
    int a, b;

    scanf("%d %d", &a, &b);

    if (a > b) {
        printf("First is bigger");
    } else if (b > a) {
        printf("Second is bigger");
    } else {
        printf("Equal");
    }

    return 0;
}