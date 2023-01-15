#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    int i,j,c=0,m=0;
    for(i=0;i<n;i++)
    {
       scanf("%d",&a[i]); 
    }
    for(i=0;i<n;i++)
    {
       if(a[i]%2==0)
       {
           c++;
       }
    }for(j=0;j<n;j++)
    {
       if(a[j]%2!=0)
       {
           m++;
       }
    }
    printf("%d %d",c,m);
}