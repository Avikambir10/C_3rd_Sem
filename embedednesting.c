#include<string.h>
#include<stdio.h>

typedef struct Aeroplane{
    char builtby[100];
    int capacity; 
    int seats;
    //Nested Structure for engine details
    struct Engine{
        char type[100];
        int power;
    }engine1,engine2;
    
}Aeroplane;



int main(){
    Aeroplane boeing747 = {"Boeing",500,1000};

    strcpy(boeing747.engine1.type , "MAin-Engine");
    boeing747.engine1.power = 3869 ; 

    strcpy(boeing747.engine2.type , "Side-engine");
    boeing747.engine2.power = 1245 ;

    printf("%s",boeing747.engine2.type);

    return 0;
}