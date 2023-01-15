#include<stdio.h>
int main()
{
    int n,i=1,j=1,c=0,s=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        s=0;
        if(n%i==0)
        {
            j=1;
            while(j<=i)
            {
                if(i%j==0)
                {
                    s++;
                }
                j++;
                
            }
            if(s!=2)
            {
                c++;
            }
        }
    }
    printf("%d",c);
}