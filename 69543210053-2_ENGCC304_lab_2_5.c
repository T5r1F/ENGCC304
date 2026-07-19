#include <stdio.h>

int main() {
    int width, length;
    int perimeter;

    scanf("%d", &width);
    scanf("%d", &length);

    perimeter = 2 * (width + length);

    printf("Perimeter = %d\n", perimeter);

    return 0;
}