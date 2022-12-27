#include<stdio.h>
int main()
{
    int i,n,m,c=0;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {   c=0;
        scanf("%d",&a[i]);
    }
    scanf("%d",&m);
    for(i=0;i<n;i++)
    {
        if(m==a[i])
        {
          c=1; 
          break;
        }
    }
    if(c==1)
    {
    printf("True");
    }
    else
    {
        printf("False");
    }
}