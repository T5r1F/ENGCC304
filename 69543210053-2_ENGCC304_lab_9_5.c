#include <stdio.h>

int main() {
    int arr[5], i, count = 0;

    for (i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < 5; i++) {
        if (arr[i] % 2 == 0) {
            count++;
        }
    }
    printf("Count = %d", count);
    return 0;
}