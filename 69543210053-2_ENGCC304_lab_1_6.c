#include <stdio.h>

int main() {
    char sourceCode[50];
    char compiler[50];
    char program[50];

    scanf("%s", sourceCode);
    scanf("%s", compiler);
    scanf("%s", program);

    printf("Source Code: %s\n", sourceCode);
    printf("Compiler: %s\n", compiler);
    printf("Program: %s\n", program);

    return 0;
}