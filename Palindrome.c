#include<stdio.h>
int main()
{ 
    int i,n,rev=0,r=0;
    scanf("%d",&n);
    int x=n; 
    while(n!=0)
    { 
        r=n%10; rev=rev*10+r; n/=10; }
        if(x==rev)
        
{
    printf("True");}
    else{ printf("False");}}