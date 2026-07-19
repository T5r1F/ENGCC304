#include <stdio.h>

int main() {
    char language[50];
    char compiler[50];
    char outputProgram[50];

    scanf("%s", language);
    scanf("%s", compiler);
    scanf("%s", outputProgram);

    printf("Language: %s\n", language);
    printf("Compiler: %s\n", compiler);
    printf("Output Program: %s\n", outputProgram);

    return 0;
}