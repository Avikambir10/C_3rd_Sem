//How to count number of words in c
#include<stdio.h>
int main(){
    FILE * ptr = fopen("handling.txt","r");
    int now = 0;
    char ch;
    if(ptr == NULL) {
        printf("Error in opening file!");
    }
    while((ch = fgetc(ptr)) != EOF){
        if(ch == ' ' || ch == '\n'){
            now++; 
        }
    }
    fclose(ptr);
    printf("%d",now);
    return 0;
}
