#include<iostream>
using namespace std;

class Demo
{
public:
    int a;

private:
    int b;

protected:
    int c;
};

int main(){

    Demo d;

    d.a=3;  // public data member accesible in main
    // d.b; // private & protected data members not accessible
    // d.c
    


    return 0;
}