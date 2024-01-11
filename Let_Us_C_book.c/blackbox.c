// Blackbox is dangerous
// Division using pointer
#include <stdio.h>

void division(int a, int b, int *quo, int *rem) {
    *quo = a / b;
    *rem = a % b;
}

int main() {
    int x = 10, y = 3;
    int quo, rem;

    division(x, y, &quo, &rem);
    printf("The quotient of %d divided by %d is %d and the remainder is %d.\n", x, y, quo, rem);

    return 0;
}