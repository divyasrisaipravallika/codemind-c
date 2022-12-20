#include<stdio.h>
int main()
{
    int n,r=0,d=0,ed=0,od=0;
    scanf("%d",&n);
    while(n!=0)
    {
        r=n%10;
        d=d+1;
        if(r%2==0)
        {
            ed=ed+1;
        }
        else 
        {
            od=od+1;
        }
        n/=10;
    }
    if(d==ed)
    {
        printf("Even");
    }
    else if(d==od)
    {
        printf("Odd");
    }
    else
    {
        printf("Mixed");
    }
}