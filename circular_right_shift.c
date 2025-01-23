#include<stdio.h>
#define MAX 4
int main(){
    int a[MAX];
    int shift[MAX];
    for(int i=0;i<MAX;i++){
        printf("\nEnter a[%d]: ",i);
        scanf("%d",&a[i]);
    }

    // printf("%d",shift[0]);

    for(int i=0,j=1;i<MAX-1 && j<MAX;i++,j++){
        shift[j] = a[i];
    }
    
    shift[0] = a[MAX-1];

    for(int i=0;i<MAX;i++){
        printf("%d ",shift[i]);
    }

    printf("\n");
}