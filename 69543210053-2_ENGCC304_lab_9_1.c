#include <stdio.h>

int main() {
int array[3], i;

for (i = 0; i < 3; i++) {
    scanf("%d", &array[i]);
}

for (i = 0; i < 3; i++) {
    printf("%d\n", array[i]);
}

return 0;

}