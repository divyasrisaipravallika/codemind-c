#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        
    }  
    int b;
        scanf("%d",&b);
        int c=0,j=0;
        for(i=0;i<n;i++)
        {
            if(a[i]<=b)
            {
                c++;
            }
            else
            {
                j=j+2;
            }
        }
        printf("%d",c+j);
    
}