#include <stdio.h>

int main() {
    int num, max;

    scanf("%d", &max);

    for (int i = 2; i <= 5; i++) {
        scanf("%d", &num);

        if (num > max) {
            max = num;
        }
    }

    printf("Max = %d", max);

    return 0;
}