#include<iostream>
using namespace std;
class Student{
    int id;
    string name;
    int age;

    public:
    Student(){

        id = 1;
        name = "Supriya";
        age = 25;
    }

     Student(int i, string n, int a){

        id = i;
        name = n;
        age = a;
    }

    Student(string n){

        id = 1;
        name = n;
        age = 25;
    }

    ~Student(){
        cout<<"Destructor called"<<endl;
    }

    void display(){
        cout<<id<<"------>"<<name<<"------>"<<age<<endl;

    }

};
int main(){

    Student s;
    s.display();

    Student s1(2,"Abhijeet", 31);
    s1.display();

    Student s2("Sanavi");
    s2.display();

    return 0;
}