#include<stdio.h>
int main()
{ 
    int i,r=0,m=0,n; 
    scanf("%d",&i); 
    n=i*i;
    while(n!=0) 
    {
        m=n%10;
        r=r+m;
        n/=10; 
        
    } if(r==i)
    { 
        printf("Neon Number");
        }
   else
   {
       printf("Not Neon Number"); 
       
   }
    
}