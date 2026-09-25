#include <stdio.h>

int main() {
    int score[4], i, sum = 0;

    for (i = 0; i < 4; i++) {
        scanf("%d", &score[i]);
        sum = sum + score[i];
    }

    printf("Average = %d", sum / 4);
    return 0;
}