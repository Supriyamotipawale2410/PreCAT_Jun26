#include<iostream>
using namespace std;

class ClassName { 
    private: 
        int data; 
    public: 
        ClassName(int d) { data = d; } 
        friend void showData(ClassName c); // declaration of friend function 
}; 
 
// Definition outside the class 
void showData(ClassName c) { 
    cout << "Data = " << c.data;  // accessing private member 
}

int main(){

    ClassName c1(400);
    showData(c1);

    return 0;
}

