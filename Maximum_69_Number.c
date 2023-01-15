#include<stdio.h>
int main()
{
  int n,d,i=0,j;
  scanf("%d",&n);
  int a[n];
  while(n!=0)
  {
      d=n%10;
      n=n/10;
      a[i]=d;
      i++;
  }
  for(j=i-1;j>=0;j--)
  {
      if(a[j]==6)
      {
          a[j]=9;
          break;
      }
  }
  for(j=i-1;j>=0;j--)
  {
      printf("%d",a[j]);
  }
}