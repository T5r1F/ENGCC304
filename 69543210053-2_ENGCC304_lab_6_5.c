#include <stdio.h>

int main() {
    int num;
    int sum = 0;
    int count = 0;

    scanf("%d", &num);

    while (num != -1) {
        sum = sum + num;
        count++;

        scanf("%d", &num);
    }

    printf("Average = %d\n", sum / count);

    return 0;
}