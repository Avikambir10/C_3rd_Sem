
#include<stdio.h>

int top = -1, stack[50];

void sum(){
    int res,op1,op2;
    op1 = stack[top];
    top--;
    op2 = stack[top];
    top--;
    res = op2 + op1;
    top++;
    stack[top] = res;
}
void diff(){
    int res,op1,op2;
    op1 = stack[top];
    top--;
    op2 = stack[top];
    top--;
    res = op2 - op1;
    top++;
    stack[top] = res;
}
void mult(){
    int res,op1,op2;
    op1 = stack[top];
    top--;
    op2 = stack[top];
    top--;
    res = op2 * op1;
    top++;
    stack[top] = res;
}
void div(){
    int res,op1,op2;
    op1 = stack[top];
    top--;
    op2 = stack[top];
    top--;
    res = op2 / op1;
    top++;
    stack[top] = res;
}
void power() {
    int res = 1 ,op1,op2,i;
    op1 = stack[top];
    top--;
    op2 = stack[top];
    top--;
    for ( i = 0; i < op1; i++)
    {
       res = res * op2; 
    }
    top++;
    stack[top] = res;
    
}
int main(){
    char st[50];
    int i ;
    printf("Enter you Postfix expression = ");
    gets(st);
    for ( i = 0; st[i] != '\0'; i++) 
    {
        if (st[i] != ' ')     /////
        {
            switch (st[i]) 
            {
            case '+':
                sum();
                break;
            case  '-':
                diff();
                break;
            case  '*':
                mult();
                break;
            case '/':
                div();
                break;
            case '^':
                power();
                break;    
            default:
                top++;
                stack[top] = st[i] - 48;
            }
        }
    }
    printf("Answer is = %d",stack[top]);
    return 0;
}
