// How to Copy text from one file to another using c

//here "Handling.txt and "Write.txt" are alredy present in system
#include<stdio.h>
int main() {
    FILE * og_file = fopen("handling.txt","r");
    FILE * copy_file = fopen ("write.txt","w");
    char ch;
    while((ch = fgetc(og_file)) != EOF){
        fputc(ch,copy_file);
        
    }
    fclose(og_file);
    fclose(copy_file);
    
    return 0;
}
