#include <stdio.h>

int main() {
    int month;

    scanf("%d", &month);

    switch (month) {
        case 1:
            printf("Jan");
            break;
        case 2:
            printf("Feb");
            break;
        case 3:
            printf("Mar");
            break;
        case 4:
            printf("Apr");
            break;
        default:
            printf("Invalid month");
    }

    return 0;
}