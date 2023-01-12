#include<stdio.h>
int main()
{
    int n,m,i,j,p=0,r=0;
    scanf("%d%d",&n,&m);
    for(i=n;i<=m;i++)
    { int c=i;
    r=0,p=0;
        while(c!=0)
        {
            p=c%10;
            c=c/10;
            r=r*10+p;
        }
        if(i==r)
        {
            printf("%d ",i);
        }
    }
    
}