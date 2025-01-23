#include<stdio.h>
#define MAX 4
int main(){
    int a[MAX];
    int s[MAX];
    for(int i=0;i<MAX;i++){
        printf("\nEnter only 0 and 1: ",i);
        scanf("%d",&a[i]);
    }

    for(int i=0,j=1;i<MAX-1 && j<MAX;i++,j++){
        s[j] = a[i];
    }
    
    s[0] = a[MAX-1];
    printf("\nCircular Right shift:");
    for(int i=0;i<MAX;i++){
        printf("%d ",s[i]);
    }

    printf("\n");
}
