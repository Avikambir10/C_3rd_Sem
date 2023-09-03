//sorting using function pointers

#include<stdio.h>
void sort(int n,int * ptr);
int main() {
    int n;
    printf("Enter size of array =");
    scanf("%d", &n);
    int arr[n];

    for (int i = 0; i < n; i++) {
        scanf("%d",&arr[i]);   
    }
    sort(n,arr);
    return 0;
}
void sort(int n ,int * ptr){
    int i,j,t;
    for ( i = 0; i < n; i++) {
        for ( j = i + 1; j < n ; j++) {
            if (*(ptr + j) < *(ptr +i))
            {
                t = *(ptr +i); *(ptr + i) =  *(ptr + j);
                *(ptr+j)=t;
            }
        }
    }
    printf("\n SORTED ARRAY = ");
    for ( i = 0; i < n; i++) {
        printf("%d ",*(ptr + i));
    }
}
