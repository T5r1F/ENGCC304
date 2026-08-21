#include <stdio.h>

int main() {
    int N, i = 1, sum = 0;

    scanf("%d", &N);

    while (i <= N) {
        sum += i;
        i++;
    }

    printf("Sum = %d", sum);

    return 0;
}