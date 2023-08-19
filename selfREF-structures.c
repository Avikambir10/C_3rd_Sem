#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct Node
{
    int val;
    struct Node * next;  //adress of next node in linked list 
}Node;

int main(){
    Node node1 = {10};
    Node node2 = {20};
    node1.next = &node2;//storing adress of node2..
    node2.next = NULL;

    printf("%d\n",(*(node1.next)).val);
    //or it can be written as...
    printf("%d\n",(node1.next)->val) ;
    return 0;
}
