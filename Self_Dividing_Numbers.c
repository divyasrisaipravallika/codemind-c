#include<stdio.h>
int main()
{
    int n,m,c=0,t=0,i,r,q;
    scanf("%d%d",&n,&m);
    for(i=n;i<=m;i++)
    {
        q=i;
        c=0;
        t=0;
        while(q!=0)
        {   c=c+1;
            r=q%10;
            if(r!=0&&i%r==0)
            t=t+1;
            q=q/10;
        }
        if(c==t)
        { 
            printf("%d ",i);
        }
    }
}