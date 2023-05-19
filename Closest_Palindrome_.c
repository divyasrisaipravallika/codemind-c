#include<stdio.h>
int main()
{
    int n,i,l=0,r=0,t,rev=0;
    scanf("%d",&n);
    for(i=n+1;r==0;i++)
    { 
        t=i;
        rev=0;
        while(t)
        {
            rev=rev*10+t%10;
            t/=10;
            } 
        if(rev==i)
        {
            r=i;
            break;
            }
        } 
        for(i=n-1;l==0;i--)
        {
            t=i;
            rev=0;
            while(t)
            { 
                rev=rev*10+t%10;
                t/=10;
           } 
           
         if(rev==i)
        {
            l=i;
            break;
            }
            }
        if(r-n>n-l) 
        {
            printf("%d",l);
        } 
        else if(r-n<n-l)
        { printf("%d",r); 
    
     }
     else
     { 
         printf("%d %d",l,r); 
         
     }
    
}