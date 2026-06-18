#include <stdio.h>

int main() {
    int a = 10, b = 3;
    int sum = a + b;
    int diff = a - b;
    int mul = a * b;
    int div = a / b;   // integer division
    int mod = a % b;

    printf("Sum = %d\n", sum);
    printf("Difference = %d\n", diff);
    printf("Multiplication = %d\n", mul);
    printf("Division = %d\n", div);
    printf("Modulus = %d\n", mod);

    return 0;
}