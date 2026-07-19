#include <stdio.h>

int main() {
    int num;

    scanf("%d", &num);

    if (num >= 10 && num <= 20) {
        printf("In Range");
    } else {
        printf("Out of Range");
    }

    return 0;
}