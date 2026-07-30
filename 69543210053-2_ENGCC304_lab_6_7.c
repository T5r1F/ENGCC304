#include <stdio.h>

int main() {
    int N;
    int i = 1;

    scanf("%d", &N);

    while (i <= N) {
        if (i % 2 != 0) {
            i++;
            continue;
        }

        printf("%d\n", i);
        i++;
    }

    return 0;
}