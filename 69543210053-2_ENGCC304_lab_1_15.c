#include <stdio.h>

int main() {
    char input[50];
    char process[50];
    char output[50];

    scanf("%s", input);
    scanf("%s", process);
    scanf("%s", output);

    printf("Input: %s\n", input);
    printf("Process: %s\n", process);
    printf("Output: %s\n", output);

    return 0;
}