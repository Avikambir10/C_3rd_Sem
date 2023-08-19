#include<stdio.h>
#include<string.h>

//syntax -->1
// struct Structurename{};
struct Student{
    char name[50];
    int rollNo;
    float gpa;
};
int main(){ 
    //syntax -->1
    // struct StructureNAme structureVariable;
    struct Student student1; //declaration

    //defination
    //we access members of structres using (.) operator
    
    strcpy(student1.name , "Rohit");
    student1.rollNo = 7;
    student1.gpa=3.89;

    printf("Name is %s\n", student1.name);  
    printf("%d\n",student1.rollNo);
    printf("%f\n",student1.gpa);

    //syntax -->2
    struct Student student2 = {"deepak",2,9.6};
    printf("\n");

    printf("Name is %s\n", student2.name);  
    printf("%d\n",student2.rollNo);
    printf("%f\n",student2.gpa);


    return 0;
}