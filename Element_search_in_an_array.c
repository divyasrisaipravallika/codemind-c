#include<stdio.h>
int main()
{
    int mid;
    int n,low=0;
    scanf("%d",&n);
    int a[n];
    int i;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%d",&mid);
    for(i=0;i<n;i++)
    {
        if(mid==a[i])
        {
            low=1;
        }
    }
    if(low==1)
    {
        printf("True");
        
    }
    else
    {
        printf("False");
    }
    
}