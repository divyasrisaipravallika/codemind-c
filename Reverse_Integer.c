#include<stdio.h>
int main()
{ 
    int n,rev=0,m;
    scanf("%d",&n); 
    while(n!=0)
    { 
        m=n%10; 
rev=rev*10+m;
n/=10; 
        
    }
    printf("%d",rev);
    
}