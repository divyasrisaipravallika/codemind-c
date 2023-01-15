#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int k;
    scanf("%d",&k);
    if(k>n)
    {
        k%=n;
    }
    for(i=n-k;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    for(i=0;i<n-k;i++)
    {
        printf("%d ",a[i]);
    }
}