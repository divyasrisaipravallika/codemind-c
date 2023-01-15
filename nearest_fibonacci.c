#include<stdio.h>
int main()
{
    int n,f=0,s=1,e=0;
    scanf("%d",&n);
    while(n>e)
    {
        e=f+s;
        f=s;
        s=e;
    }
    if(n-f<s-n)
    {
        printf("%d",f);
    }
    else if(n-f==s-n)
    {
        printf("%d %d",f,s);
    }
    else
    {
        printf("%d",s);
    }
    
}