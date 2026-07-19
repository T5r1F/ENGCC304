#include <stdio.h>

int main() {
    int price;
    int jamnuan;
    int total;

    scanf("%d", &price);
    scanf("%d", &jamnuan);

    total = price * jamnuan;

    printf("Total price = %d\n", total);

    return 0;
}