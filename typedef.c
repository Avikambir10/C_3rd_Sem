#include<stdio.h>
typedef struct Student
{
    char name[50];
    int rollno;
    float gpa;

}Stu;

int main(){
    struct Student student1 = {"Rohit" ,1 ,9.3};
    Stu student2 = {"kishan", 2 ,9.4}; //because of Typedef
    printf("Name of the student is %s\n",student2.name);
    return 0;
}

#include<stdio.h>
typedef struct Student{
    int rollNo;
    char name[100];
    float marks;
    char id;
}Stu;

int main(){
    Stu s = {10, "himanshu", 89.2};
    printf("%d, %s, %f\n", s.rollNo, s.name, s.marks);
    printf("%d\n",sizeof(s));
    return 0;
}