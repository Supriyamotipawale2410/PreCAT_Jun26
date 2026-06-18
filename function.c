#include<stdio.h>

// return value & argument
int add(int,float); //declaration
 
//no return value & only argument
void sub(int, int);

//no return value & no argument

void display();

//return value but no argument

float multiply();

int main()
{
    int sum=add(10,20.3); //call
    printf("%d\n",sum);

    sub(10,5);

    display();
    display();
    display();
    display();
    sub(20,4);
    float result = multiply();
    printf("%.2f\n", result);


    return 0;
}

int add(int a,float b) //define
{
    return a+b;
}

void sub (int a, int b){
    printf("%d\n",a-b);
}

void display(){
    printf("Hello from India\n");
}

float multiply(){

    return 10.5 * 3;
}