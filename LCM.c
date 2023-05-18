#include<stdio.h>
int main()
{ 
    int a,b,m,i=2,l=1; 
    scanf("%d%d",&a,&b); 
    if(a<b) 
    {
        m=b; 
        
    }
    else 
    { 
        m=a; 
        
    }
    while(a!=0 && b!=0 && i<=m)
    { 
        if(a%i==0 && b%i==0)
    {
        l=l*i;
        a=a/i;
        b=b/i;
        i=2;
    }
    else 
    { 
        i++;
    } 
        
    } 
    l=l*a*b;
    printf("%d",l);}