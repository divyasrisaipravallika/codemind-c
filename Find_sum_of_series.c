#include<stdio.h>
int main()
{
    int n,i;
    float s=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        s=s+(1.0/i);
    }
    printf("%0.2f",s);
}