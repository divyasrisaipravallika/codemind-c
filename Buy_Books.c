#include<stdio.h>
int main()
{
    int n,i,m=0,s=0;
    scanf("%d",&n);
    int a[n],b[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        scanf("%d",&b[i]);
    }
    for(i=0;i<n;i++)
    {
        s=s+a[i];
    }for(i=0;i<n;i++)
    {
        m=m+b[i];
    }
    if(m-s<0)
    printf("0");
    else
    printf("%d",m-s);
    
    
}