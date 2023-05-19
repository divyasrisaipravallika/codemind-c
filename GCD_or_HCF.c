#include<stdio.h>
int main()
{ 
    int i,n,m;
    scanf("%d%d",&m,&n);
    int gcd;
    for(i=1;i<=m&&i<=n;i++)
    
 {
     if(m%i==0&&n%i==0)
     {
         gcd=i; 
         
     }
} 
printf("%d",gcd);
    
}