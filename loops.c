#include<stdio.h>

int main(){

    // printf("1,2,3,4,5");


    // int a = 1;
    // int b = 2;
    // int c = 3;
    // printf("%d",a);


    //loops----1.for 2.while 3.do while

int a;

//for(initilization ; condition ; increment/decrement){}
  for(a=1 ; a<=5 ; a++){
    if(a %2 == 0){
    printf("%d is even \n",a);
    }
    else{
    printf("%d is odd \n",a);
    }
  }
int b=1;
  int a=   ++b; //------>b=2, a=2-------pre-increment
    a= b++ ;//------->a=1, b=2--------post-increment

    a = b--; //b=0, a=1
    a = --b; //b=0, a=0



    return 0;
}