#include<stdio.h>
int main()
{
    int m,n,x=0,i,j,c=0;
    scanf("%d%d",&m,&n);
    for(i=m;i<=n;i++)
    {
        x=0;
        for(j=i;j<=n;j++)
        {
            x=x+j;
            if(x%2!=0)
            {
                c++;
            }
        }
    }
    printf("%d",c);
}