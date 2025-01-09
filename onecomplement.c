#include<stdio.h>
void onescomp(int a[])
{
    for(int i=0;i<16;i++)
    {
        if(a[i]==0)
        {
            a[i]=1;
        }
        else{
            a[i]=0;
        }
    }
    printf("\n Onescomplement is:");
    for(int i=0;i<16;i++)
    {
        printf("%d",a[i]);
    }
}
int main()
{
    int a[100];
  
    printf("Enter the 16 bit data=");
     for(int i=0;i<16;i++)
    {
        scanf("%d",&a[i]);
    }
    onescomp(a);
    return 0;
}