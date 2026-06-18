// #include <stdio.h>
// int main() {
//     int age = 20; //--%d         //declare & defining a variable
//     int age2 = 24;
//     float marks = 85.512334456; //--%f-----6 digit --85.500000-----%.2f


//    // These lines are to print int & float values.
//     printf("I am %d years old & My Sister is %d years old \"My marks are %.5f \" ", age, age2, marks);


#include <stdio.h>
int main() {
    int age;    //declaring a variable
    float marks;
    char grade;

    printf("Enter age: ");
    scanf("%d", &age);

    printf("Enter marks: ");
    scanf("%f", &marks);

    printf("Enter grade: ");
    scanf(" %c", &grade); // Notice the space before %c

    printf("\nAge = %d, Marks = %.2f, Grade = %c\n", age, marks, grade);

    return 0;
}
