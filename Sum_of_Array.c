#include<stdio.h>
int main()
{
    int i,n,c=0; 
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++) 
    { 
        scanf("%d",&a[i]);
    
    c=c+a[i];
    
        
    } 
    printf("%d",c);
    
}