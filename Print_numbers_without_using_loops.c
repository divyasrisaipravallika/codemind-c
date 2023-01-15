#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    if(n>=1&&n<=10000)
    {
        for(i=1;i<=n;i++)
        { 
            if(i==n)
            printf("%d ",i);
            else 
            printf("%d ",i);
        }
    }
    else if(n<=0 || n>10000)
    {
        printf("The Number Series is Not Possible Print");
    }
}