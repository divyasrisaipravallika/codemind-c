#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,i,j,p=1,c=0;
    scanf("%d%d",&a,&b);
    for(i=a;i<=b;i++)
    {
        p=1;
        for(j=2;j<=sqrt(i);j++)
        {
            if(i%j==0)
          {
              p=0;
          }
        }
        if(p&&i!=1)
     {
         c++;
     }
    }
    printf("%d",c);
}