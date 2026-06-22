#include<iostream>
using namespace std;

class Student{

    int id;
    string name;
    int age;

    public:
    Student(int i, string n, int a){
        id = i;
        name = n;
        age = a;
    }

    Student(){
        id = 101;
        name= "Rahul";
        age = 25;
    }

    void display(){
        cout<<id <<"-----"<<name<< "-----"<<age<<endl;
    }


};

int main(){

    Student s1(1,"Supriya",29);
    s1.display();
    Student s2(2,"Priya",23);\
    s2.display();

    Student s3(3,"Riya",25);
    s3.display();

    Student s4;
    s4.display();

    return 0;
}