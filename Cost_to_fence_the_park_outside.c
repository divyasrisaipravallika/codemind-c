#include<stdio.h>
int main()
{
    int a,b,c,d,n;
    scanf("%d%d%d%d",&a,&b,&c,&d);
    n=d*((a+2*c)*(b+2*c)-(a*b));
    printf("%d",n);
}