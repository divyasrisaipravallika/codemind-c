#include<stdio.h>
int main()
{
    int n,i,j,m=0,r=0;
    scanf("%d",&n);
    while(n!=0)
    {
        m=n%10;
        r=r*10+m;
        n/=10;
    }
    printf("%d",r);
}