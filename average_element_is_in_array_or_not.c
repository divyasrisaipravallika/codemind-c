#include<stdio.h>
int main()
{
    int n,i,flag=0,c,m=0;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        m=m+a[i];
    }
    c=m/n;
    for(i=0;i<n;i++)
    {
        flag=0;
        if(c==a[i])
        {
            flag=1;
            break;
        }
    }
    if(flag==1)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}