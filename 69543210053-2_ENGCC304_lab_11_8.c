#include <stdio.h>
int main() {
    int table[2][2];
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            scanf("%d", &table[i][j]);
        }
    }
    for (int i = 0; i < 2; i++) {
        printf("%d %d\n", table[i][0], table[i][1]);
    }
    return 0;
}