#include<stdio.h>
int main()
{
    int n,i,j;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int c;
    scanf("%d",&c);
    int max;
    max=a[0];
    for(j=0;j<n;j++)
    {
        if(max<a[j])
        {
            max=a[j];
        }
    }
    
    for(j=0;j<n;j++)
    {
        if((c+a[j])>=max)
        {
            printf("True ");
        }
        else
        {
            printf("False ");
        }
    }
}