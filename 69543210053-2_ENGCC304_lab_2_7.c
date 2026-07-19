#include <stdio.h>

int main() {
    int cm;
    int meter;
    int centimeter;

    scanf("%d", &cm);

    meter = cm / 100;
    centimeter = cm % 100;

    printf("Meter = %d\n", meter);
    printf("Centimeter = %d\n", centimeter);

    return 0;
}