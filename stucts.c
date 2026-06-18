#include <stdio.h>
#include <string.h>

struct Student {	// Structure declaration
    int roll;		//Member (int ) //4
    char name[50];	//Member (char[])       //50*1=50
    float marks;	//Member (float )   //4     //=====>4+50+4=58 byte
};			// End the structure with a semicolon

// int main() {
//     struct Student s1;

//     // Assigning values
//     s1.roll = 101;
//     strcpy(s1.name, "Abcd");
//     s1.marks = 95.5;

//     struct Student s2 = {102, "Amit", 77.5};
//     struct Student s3 = {102, "Amit", 77.5};
//     struct Student s4 = {102, "Amit", 77.5};

//     // Accessing members
//     printf("Roll: %d\n", s1.roll);
//     printf("Name: %s\n", s1.name);
//     printf("Marks: %.2f\n", s1.marks);

//     printf("Roll: %d\n", s2.roll);
//     printf("Name: %s\n", s2.name);
//     printf("Marks: %.2f\n", s2.marks);


    //  Array of Structures
int main(){
struct Student s3[2] = {
    {101, "Supriya", 89.5},
    {102, "Amit", 77.5}
};
int i;
for(i=0;i<2;i++){
    printf("%d--",s3[i].roll);
    printf("%s--",s3[i].name);
    printf("%.3f--",s3[i].marks);
    printf("\n---------------------\n");
}


    return 0;
}


