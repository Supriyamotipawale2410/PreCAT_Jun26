#include <stdio.h>

int main() {
    int x = 10;
    int* ptr = &x;

    printf("Value of x: %d\n", x);			//Value of x: 10
    printf("Address of x: %p\n", &x);			//Address of x: 0x7ffc9d3160f4
    printf("Pointer ptr stores: %p\n", ptr);		//Pointer ptr stores: 0x7ffc9d3160f4
    printf("Value at ptr: %d\n", *ptr);			//Value at ptr: 10

    return 0;
}