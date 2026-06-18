#include <stdio.h>

int main() {

    //Arithmetic
    // int a = 10, b = 3;
    // int sum = a + b;
    // int diff = a - b;
    // int mul = a * b;
    // int div = a / b;   // integer division
    // int mod = a % b;

    // printf("Sum = %d\n", sum);
    // printf("Difference = %d\n", diff);
    // printf("Multiplication = %d\n", mul);
    // printf("Division = %d\n", div);
    // printf("Modulus = %d\n", mod);

    //Assignment

    // int a = 10;

    // printf("%d\n", a+=2); //a = a+2-----> 12

    // printf("%d\n", a-=2);//---->10
    // printf("%d\n", a*=2);//----->20
    // printf("%d\n", a/=2);//------>10
    // printf("%d\n", a%=2);//------>0


//Logical
    
    // int a = 5, b = 10;

    // if (a > 0 && b > 0) {
    //     printf("Both a and b are positive\n");
    // }

    // if (a > 0 || b < 0) {
    //     printf("At least one condition is true\n");
    // }
    
    // if (!(a > b)) {
    //     printf("a is NOT greater than b\n");
    // }


//Bitwise


    //  int a = 5, b = 3;  
    // // Binary: a = 0101, b = 0011

    // printf("a & b = %d\n", a & b);  // 0101 & 0011 = 0001 = 1
    // printf("a | b = %d\n", a | b);  // 0101 | 0011 = 0111 = 7
    // printf("a ^ b = %d\n", a ^ b);  // 0101 ^ 0011 = 0110 = 6
    // printf("~a = %d\n", ~a);        // bitwise NOT → depends on compiler (2's complement)
    // printf("a << 1 = %d\n", a << 1); // 0101 << 1 = 1010 = 10
    // printf("a >> 1 = %d\n", a >> 1); // 0101 >> 1 = 0010 = 2


//Ternery
   int age;

    printf("Enter age: ");
    scanf("%d", &age);

    (age >= 18) ? printf("You can Vote") : printf("You can't vote");

    return 0;

}

   
