#include<stdio.h>
int main()
{ 
    int n,i,t,j,k=0,c=0;
    scanf("%d",&n);
    int a[n];
    t=n;
    while(n)
    {
        a[k++]=n%10;
        n/=10;
        
        
    }
    for(i=0;i<=k;i++)
    {
        c=0;
        for(j=0;j<=k;j++)
        {
            if(i!=j)
            {
                if(a[j]==a[i])
                {
                    c++;
                }
            }
        }
        if(c>0)
        {
            break;
        }
    }
    if(c>0) 
{ printf("Not Unique Number"); } 
else{ printf("Unique Number"); }}