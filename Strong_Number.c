#include<stdio.h>
int fun(int n)
{
    int r=1;
    for(int j=1;j<=n;j++)
        {
            r=r*j;
        }
    return r;
}
int main()
{
    int n,j,r=1,i=0,m=0;
    scanf("%d",&n);
       int s=0;
       int t=n;
     while(n!=0)
     {
         m=n%10;
         s+=fun(m);
         n/=10;
     }
     if(t==s)
     {
         printf("The number %d is a strong number",t);
     }
     else
     {
         printf("The number %d is not a strong number",t);
     }
}