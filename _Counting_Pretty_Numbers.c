#include<stdio.h>
int main()
{
    int n,m=0;
    scanf("%d",&n);
    while(n--)
    {  
        int a,b;
        scanf("%d%d",&a,&b);
        m=0;
        for(int i=a;i<=b;i++)
        {
            if(i%10==2||i%10==3||i%10==9)
            {
                m++;
            }
        }
        printf("%d
",m);
        
    }
    
}