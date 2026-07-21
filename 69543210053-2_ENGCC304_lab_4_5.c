#include <stdio.h>

int main() {
    int grade;

    scanf("%d", &grade);

    switch (grade) {
        case 4:
            printf("Grade = A");
            break;
        case 3:
            printf("Grade = B");
            break;
        case 2:
            printf("Grade = C");
            break;
        case 1:
            printf("Grade = D");
            break;
        case 0:
            printf("Grade = F");
            break;
        default:
            printf("Invalid grade");
    }

    return 0;
}