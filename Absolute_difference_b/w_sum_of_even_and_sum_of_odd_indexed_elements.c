#include<stdio.h>
int main()
{
    int i,j,n;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int c=0,m=0;
    
    for(i=0;i<n;i++)
    {   
        if( i%2==0 )
        {
            c=c+a[i];
        }
    
        else
        {
            m=m+a[i];
        }
    }
    int b;
if(c<m)
    {
        b=m-c;
    }
    else
    {
        b=c-m;
    }
    
    printf("%d",b);
}