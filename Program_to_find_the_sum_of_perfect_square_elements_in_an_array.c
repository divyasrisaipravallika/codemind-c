#include<stdio.h>
int p(int n)
{
  int i;
  for(i=1;i<=n;i++)
  {
      if(n==i*i)
      {
          return 1;
      }
  }
  return 0;
}
int main()
{
    int n,i,c=0;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(p(a[i]))
        {
            c+=a[i];
        }
    }
    printf("%d",c);
}