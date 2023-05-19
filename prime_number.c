#include<stdio.h>
int main()
{
    int n,m=0,i;
    scanf("%d",&n); 
    for(i=1;i<=n;i++)
    { 
        if(n%i==0) 
        {
            m++;
        } 
        
    }
    if(m==2) 
{ 
    printf("prime");
    } else 
    { 
        printf("not a prime"); }}