#include<stdio.h>
int main()
{
    int n,i,r=0,m=0;
    scanf("%d",&n);
    while(n!=0)
    {
        m=n%10;
        r=r*10+m;
        n/=10;
    }
    printf("%d",r);
}