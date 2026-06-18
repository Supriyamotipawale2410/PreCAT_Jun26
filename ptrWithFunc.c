void updateValue(int *p) {
    *p = 50;  // changes the actual variable in main
}

void swap(int a, int b){

    int temp =  b;
    b= a;
    a= temp;
    printf("%d-------%d\n",a,b);
}

void swap1(int* x, int* y){

    int* temp =  y;
    y= x;
    x= temp;
    // printf("%d-------%d\n",x,y);
}

int main() {
    int num = 25;
    updateValue(&num);
    printf("Updated value: %d\n", num);  //Updated value: 50

  int a=10,b=25;
  printf("%d-------%d\n",a,b);
    swap(a,b);
    printf("%d-------%d\n",a,b);


    int x=10,y=25;
  printf("%d-------%d\n",x,y);
    swap1(&x,&y);
    printf("%d-------%d\n",x,y);
    return 0;
}