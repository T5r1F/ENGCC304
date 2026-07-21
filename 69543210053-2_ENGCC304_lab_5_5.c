#include <stdio.h>

int main() {
    int score, sum = 0;

    for (int i = 1; i <= 4; i++) {
        scanf("%d", &score);
        sum = sum + score;
    }

    printf("Average = %d", sum / 4);

    return 0;
}