#include<stdio.h>
int main()
{
    int n,i,d,o=0,r=0,c=0,m=0;
    scanf("%d%d",&n,&d);
    while(n!=0)
    {
        i=n%d;
        n=n/d;
        if(i==0)
        {
            o=1;
            r++;
            c=r;
            
            
        }
        else
        {
            if(c>m)
            {
                m=c;
            }
            r=0;
        }
        
    }
    if(o==0)
    {
        printf("-1");
    }
    else
    {
        printf("%d",c);
    }
}