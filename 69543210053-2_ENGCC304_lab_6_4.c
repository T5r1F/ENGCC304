#include <stdio.h>

int main() {
    int num;

    scanf("%d", &num);

    while (num <= 0) {
        scanf("%d", &num);
    }

    printf("Accepted = %d\n", num);

    return 0;
}