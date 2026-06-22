#include<iostream>
using namespace std;

class Demo { 
    static int count; 
    int myCount=0;
public: 
    Demo() { 
        count++; 
    } 

    static void showCount() { 
        count++;
        cout << "Count = " << count<<endl; 
    } 

     void display() { 
        myCount++;
        cout << "Count = " << myCount<<endl; 
    } 
}; 
int Demo::count = 0; 

int main(){

    // Demo d;
    Demo :: showCount();
    Demo :: showCount();
    Demo :: showCount();

cout<<endl;

    Demo d,d1,d2;
    d.display();
      d1.display();
        d2.display();
    return 0;
}


