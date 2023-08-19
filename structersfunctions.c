#include<string.h>
#include<stdio.h>

struct Student
{
    char name[100];
    int rollNo;

};
void changeName(struct Student student){
    strcpy (student.name, "Vikas");
    printf("%s\n",student.name);
}
void changerollNo(struct Student student){
    student.rollNo = 69;
    printf("%d\n",student.rollNo);

}

int main(){
    
    struct Student st1 = {"Rohan", 54};

    printf("%s\n",st1.name);
    printf("%d\n",st1.rollNo);

    changeName(st1);
    changerollNo(st1);

   // printf("%s\n",st1.name);
   // printf("%d\n",st1.rollNo);
    return 0 ;
}