#include <stdio.h>

int main() {
    int num[5];
    int target;
    int found = 0;

    for (int i = 0; i < 5; i++) {
        scanf("%d", &num[i]);
    }

    scanf("%d", &target);

    for (int i = 0; i < 5; i++) {
        if (num[i] == target) {
            found = 1;
        }
    }

    if (found == 1) {
        printf("Found");
    } else {
        printf("Not Found");
    }

    return 0;
}