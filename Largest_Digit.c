#include<stdio.h>
int main()
{
    int n,i,m=0,r=0;
    scanf("%d",&n);
    for(i=1;n>i;i++)
    {
        r=n%10;
        n=n/10;
        if(m<r)
        {
            m=r;
        }
    }
    printf("%d",m);
}