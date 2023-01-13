#include<stdio.h>
int main()
{
    long int n,i,m=0,c=0;
    scanf("%ld",&n);
    long int k=n,r=0;
    while(n!=0)
    {
        m=n%10;
        n/=10;
    }
    
    while(k!=0)
    {
        r=k%10;
        c++;
        k/=10;
    }
    if(m!=0 && c==10)
    {
        printf("Valid");
    }
    else
    {
        printf("Invalid");
    }
}