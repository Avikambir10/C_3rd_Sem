//Program to reverse a string using stack...
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define N 100
char stack[N];
char output[N];
int top = -1;
int count = 0;

void push(char temp){
    if (top == N - 1)
    {
        exit(1);
    }
    else {
        top++;
        stack[top] = temp;
    }
}

void pop() {
    if(top == -1){
        exit(1);
    }else{
        output[count] = stack[top];  
        top--;
        count ++;
    }
}


int main(){
    char str[N];
    printf("Enter a string =");
    gets(str);
    for (int i = 0; i < strlen(str); i++){
        push(str[i]);
    }
    for (int i = 0; i < strlen(str); i++){
        pop(str[i]);
    }    

    printf("\nReverse string is =");

    for (int i = 0; i < strlen(str); i++){
        printf("%c",output[i]);
    }   

    return 0;
}
