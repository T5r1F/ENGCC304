#include <stdio.h>

int main() {
    int signal;

    scanf("%d", &signal);

    switch (signal) {
        case 1:
            printf("Stop");
            break;
        case 2:
            printf("Ready");
            break;
        case 3:
            printf("Go");
            break;
        default:
            printf("Unknown signal");
    }

    return 0;
}