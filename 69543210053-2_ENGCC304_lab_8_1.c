#include <stdio.h>

int main() {
    int price, quantity;

    scanf("%d %d", &price, &quantity);

    printf("Total = %d", price * quantity);

    return 0;
}