#include <stdio.h>

int main() {
    int score[5];
    int count = 0;

    for (int i = 0; i < 5; i++) {
        scanf("%d", &score[i]);
    }

    for (int i = 0; i < 5; i++) {
        if (score[i] > 50) {
            count++;
        }
    }

    printf("Count = %d\n", count);

    return 0;
}