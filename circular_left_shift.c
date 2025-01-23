#include<stdio.h>
#define MAX 4
int main(){
    int a[MAX];
    int shift[MAX];
    for(int i=0;i<MAX;i++){
        printf("\nEnter a[%d]: ",i);
        scanf("%d",&a[i]);
    }

    printf("\n");

    for(int i=MAX-1,j=MAX-2;i>0 && j>=0;i--,j--){
        shift[j] = a[i];
    }
    
    shift[MAX-1] = a[0];

    printf("Circular Left shift Register: ");
    for(int i=0;i<MAX;i++){
        printf("%d ",shift[i]);
    }

    printf("\n");
}