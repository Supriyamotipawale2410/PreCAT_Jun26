#include<iostream>
using namespace std;

class Student{
private :
int id;
string name;

public:
void calculateMarks(int m1, int m2, int m3){

    float result = (m1+m2+m3)/ 3;
    cout<< "Result is : "<< result<< endl;
}

void calculateMarks(int m1, int m2, int m3, int spm){
    float result = (m1+m2+m3+spm)/ 3;
    cout<< "Result is : "<< result<< endl;
}
};

int main(){

    Student s1, s2;

    s1.calculateMarks(78,85,65);
 
    s2.calculateMarks(59,88,87,5);


    return 0;
}