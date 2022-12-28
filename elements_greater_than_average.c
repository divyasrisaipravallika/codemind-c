#include<stdio.h>
int main()
{
    int n,i,flag,sum=0;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        sum=sum+a[i];
    }
    int c;
    c=0;
    flag=sum/n;
    for(i=0;i<n;i++)
    {
        if(a[i]>=flag)
        {
            c++;
        }
    }
    printf("%d",c);


}