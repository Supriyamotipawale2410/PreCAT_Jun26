#include <stdio.h>
#include<stdbool.h> // for bool datatype

void votingAgeValidity(int age);
bool negativeAgeCkeck(int age);
int main() {
    int age =19;
    int age1 =-1;
    int age2 = 14;
  votingAgeValidity(age);
  votingAgeValidity(age1);
  votingAgeValidity(age2);
    votingAgeValidity(1500);

    return 0;
}
void votingAgeValidity(int age){
    bool res = negativeAgeCkeck(age);
    if(res == true){
        if(age >= 18){
            printf("You are allowed to vote...\n");
        }else{
            printf("You are not allowed to vote...Age is less than the valid age to vote\n");
        }
    }else{
        printf("You entered invalid age... Please enter correct age as input.\n");
    }    
}

bool negativeAgeCkeck(int age){
    if(age >= 1 && age < 120){
        return true;
    }else{
        return false;
    }
}
