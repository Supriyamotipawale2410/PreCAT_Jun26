#include <stdio.h>

int main() {

    int choice;

    printf("Enter your choice :  ");
    scanf("%d",&choice);

    switch(choice){
        case 1:
            printf("You entered 1\n");
            break;

        case 2:
            printf("You entered 2\n");
             break;
        case 3:
            printf("You entered 3\n");
             break;

        default:
            printf("You entered wrong choice. Please enter a choice between 1 to 3.");     
    }



    return 0;
}
