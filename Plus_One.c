#include<stdio.h>
int main()
{
    int n,i,k=0;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        k=k*10+a[i];
    }
   k+=1;
   int t=k;
   int d=0;
   while(t)
   {
       t/=10;
       d++;
   }
   int r[d];
   for(i=0;i<d;i++)
   {
       r[i]=k%10;
       k/=10;
   }
   for(i=d-1;i>=0;i--)
   {
       printf("%d ",r[i]);
   }
}