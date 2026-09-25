#include <stdio.h>

int main() {
    int num[3];
    int temp;

    scanf("%d %d %d", &num[0], &num[1], &num[2]);

    if (num[0] > num[1]) {
        temp = num[0];
        num[0] = num[1];
        num[1] = temp;
    }

    if (num[0] > num[2]) {
        temp = num[0];
        num[0] = num[2];
        num[2] = temp;
    }

    if (num[1] > num[2]) {
        temp = num[1];
        num[1] = num[2];
        num[2] = temp;
    }

    printf("%d\n", num[0]);
    printf("%d\n", num[1]);
    printf("%d", num[2]);

    return 0;
}