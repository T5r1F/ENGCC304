#include <stdio.h>

int main() {
    int temp;

    scanf("%d", &temp);

    if (temp <= 15) {
        printf("Cold");
    } else if (temp <= 30) {
        printf("Normal");
    } else {
        printf("Hot");
    }

    return 0;
}