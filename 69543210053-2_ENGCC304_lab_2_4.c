#include <stdio.h>

int main() {
    int width, length;
    int area;

    scanf("%d", &width);
    scanf("%d", &length);

    area = width * length;

    printf("Area = %d\n", area);

    return 0;
}