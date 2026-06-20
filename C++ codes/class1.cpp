#include<iostream>
using namespace std;

class Student
{
private:

    int roll;
    string name;

public:
   void addNewStudent( int r, string n){
        roll = r;
        name= n;
    }
    void display()
    {
        cout<<"Roll : "<<roll<<endl;
        cout<<"Name : "<<name<<endl;
    }
};
int main()
{
    Student s1, s2, s3;

    // s1.roll=101;
    // s1.name="Rahul";

    s1.addNewStudent(10,"Supriya");
    s2.addNewStudent(11,"Priya");
    s3.addNewStudent(12,"Riya");
    
    s1.display();
    s2.display();
    s3.display();

    return 0;
}

