#include<stdio.h>

int maximunNumPrinting(int, int, int);

int main(){

    // int max = maximunNumPrinting(10,5,1);
    //  max = maximunNumPrinting(10,5,100);
    //  max = maximunNumPrinting(10,500,100);
    // printf("Maximun Num is : %d",max);

    int n1, n2, n3;
    printf("Enter 3 values to check maximum between them: ");
    scanf("%d %d %d", &n1, &n2, &n3);

    int max = maximunNumPrinting(n1,n2,n3);
    printf("Maximun Num is : %d",max);


    return 0;
}

int maximunNumPrinting(int num1, int num2, int num3){

    if(num1 >num2 && num1 > num3){
        return num1;
    }
    else if(num2>num1 && num2>num3){
        return num2;
    }
    else{
        return num3;
    }

}

