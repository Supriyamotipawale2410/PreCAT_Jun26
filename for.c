// #include<stdio.h>

// int main(){

// int i;

// for(i=10; i>=0; i--){
//     if(i%2 == 0){
//     printf("%d\n",i);
//     }
// }


//     return 0;
// }



// //5-->1*2*3*4*5


// #include<stdio.h>

// int main(){
// printf("Please enter a value to find factorial:");
// int val;

// scanf("%d",&val);
// int i; //0
// int fact=1;
// for(i=1;i<=val;i++){
// fact = fact * i;    //fact*=i
    
// }

// printf("Factorial is: %d",fact);
//     return 0;
// }


#include<stdio.h>

int main(){

    int i, val;
printf("Enter value to print table: ");
scanf("%d",&val);
for(i=1; i<=10; i++){

    printf("%d * %d = %d\n",val,i, i*val);
}

}

// 6 * 1 =6
//6*2 = 12