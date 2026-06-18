#include<stdio.h>

int main(){

    int age;

    printf("Enter your age");
    scanf("%d", &age);

    if(age >= 18){
        printf("You can Vote...");
    }
    else if(age < 1){
        printf("Please enter valid age");
    }

    else{
        printf("You can't vote now. Come when your age is 18 or above");
    }



    return 0;
}