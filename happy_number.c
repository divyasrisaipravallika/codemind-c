#include<stdio.h>
#include<math.h>
int fun(int n)
{
    int s=0,r,res;
    while(1)
    {
        s=0;
        while(n!=0)
        {
            r=n%10;
            s=s+(r*r);
            n=n/10;
        }
        if(s>9)
        {
            n=s;
            continue;
        }
        else
        {
            break;
        }
    }
    if(s==1 || s==7)
    {
        res=1;
        
    }
    else
    {
        res=0;
    }
    return res;
}
int main()
{
    int n;
    scanf("%d",&n);
    int resi;
    resi=fun(n);
    if(resi==1)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}