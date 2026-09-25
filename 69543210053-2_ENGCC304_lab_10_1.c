#include <stdio.h>

int main() {
    int num[5];
    int min;

    for (int i = 0; i < 5; i++) {
        scanf("%d", &num[i]);
    }

    min = num[0];

    for (int i = 1; i < 5; i++) {
        if (num[i] < min) {
            min = num[i];
        }
    }

    printf("Min = %d", min);

    return 0;
}