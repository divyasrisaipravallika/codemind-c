#include<stdio.h>
int main()
{
    int i,n,m,p,c,k=0,j;
    scanf("%d",&p);
    int a[p];
    for(i=1;i<p;i++)
    {
        if(p%i==0)
        {
            c=0;
            for(j=1;j<=i;j++)
            {
                if(i%j==0)
                {
                    c++;
                }
            }
            if(c==2)
            {
                a[k]=i;
                k++;
            }
        }
    }
    int y=0;
    for(i=0;i<k;i++)
    {
        for(j=1;j<=k;j++)
        {
            if(a[i]*a[j]==p)
            {
                printf("%d %d",a[i],a[j]);
                y++;
                break;
            }
        }
    }
    if(y==0)
    {
        printf("-1");
    }
}