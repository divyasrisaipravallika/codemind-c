#include<stdio.h>
int main()
{
    int n,i,j,c=1;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {  c=1;
        for(j=1;j<=a[i];j++)
        {
            c=c*j;
        }
        printf("%d
",c);
    }
    
}