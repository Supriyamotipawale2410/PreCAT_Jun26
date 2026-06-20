#include <stdio.h>

extern int shared;  // declare variable from file1.c

int main() {
    printf("Value from extern variable = %d\n", shared);
    return 0;
}