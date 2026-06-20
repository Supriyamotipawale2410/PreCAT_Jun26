#include <stdio.h>

void counter() {
    static int count = 0;  // retains value across function calls
    count++;
    printf("static count = %d\n", count);
}

int main() {
    counter();
    counter();
    counter();
    return 0;
}