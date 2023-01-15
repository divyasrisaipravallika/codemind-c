#include<stdio.h>
int main()
{
    int n,a,b;
    scanf("%d",&n);
    while(n--)
    {
        scanf("%d%d",&a,&b);
        if(a==1)
        {
            if(b%2==0)
            {
                printf("Even
");
            }
            else
            {
                printf("Odd
");
            }
        }
        else if(b%2==0)
        {
            printf("Impossible
");
        }
        else if(a%2==0)
        {
            printf("Even
");
        }
        else
        {
            printf("Odd
");
        }
    }
}