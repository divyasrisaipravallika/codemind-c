#include<stdio.h>
int main()
{
    int n,i,m=0,r=0,o=0,g=0; 
    scanf("%d",&n);
    int d;
    d=n;
    while(n!=0)
    { 
        m=n%10; 
        r=r*10+m;
        n/=10;
    } 
    int c;
    c=r*r;
    while(c!=0)
    {
        g=c%10;
        o=o*10+g;
        c/=10;
    } 
    int k;
    k=d*d;
    if(o==k) 
   {
    printf("True"); 
       
   }
   else
   { 
       printf("False"); 
       
   }
    
}