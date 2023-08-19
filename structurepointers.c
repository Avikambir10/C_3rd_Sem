#include<string.h>
#include<stdio.h>

typedef struct Student
{
    char name[100];
    int rollNo;
}Stu;


int main() {
    //pointer syntax
    //datatype (whose pointer you want to make)* pointerNAme = &variable

    struct Student student1 = {"vikas",1};
    Stu student2 = {"Rohit", 2};

    struct Student * student1Ptr = &student1 ;
    Stu * student2Ptr = &student2;
    
    //structure pointer will have starting adress of first member of the structure
    //and normal variable pointers wil point at that address where they are pointing now
    printf("%x\n",student1Ptr);
    printf("%x\n",&student1.name);

    strcpy((*student2Ptr).name,"Shivam");
    printf("%s\n",(*student2Ptr).name);

    //syntax-2 for derefrencing values of pointers
    //'->' Arrow operator

    printf("%s\n",student2Ptr->name);

    return 0;
}    