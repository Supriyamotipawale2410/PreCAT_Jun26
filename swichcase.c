#include <stdio.h>

int main() {
    int a = 40, b=20;
    int choice;
    printf("Press 1 for Addition\nPress 2 for Subtraction\nPress 3 for Multiplication");
    printf("\nPress 4 for Division\nPress 5 for Modulus");
    printf("Enter your choice :  ");
    scanf("%d",&choice);

    switch(choice){
        case 1:
            printf("%d",a+b);
            break;
        case 2:
            printf("%d",a-b);
             break;
        case 3:
            printf("%d",a*b);
             break;
        case 4:
            printf("%d",a/b);
             break;
        case 5:
            printf("%d",a%b);
             break;     
        default:
            printf("You entered wrong choice. Please enter a choice between 1 to 3.");     
    }
    return 0;
}
