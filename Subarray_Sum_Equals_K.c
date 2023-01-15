#include<stdio.h>
int main()
{
    int n,i,j,k,s=0,r=0;
    scanf("%d%d",&n,&k);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);

    }
    for(i=0;i<n;i++)
    {   s=0;
        for(j=i;j<n;j++)
        {
           s=s+a[j];
           if(s==k)
           {
               r++;
           }
        }
    }
    printf("%d",r);
}