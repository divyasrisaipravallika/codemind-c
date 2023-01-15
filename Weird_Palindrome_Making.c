#include<stdio.h>
int main()
{   int n,i,j;
    scanf("%d",&n);
    while(n--)
    {    int o,m=0;
        scanf("%d",&o);
        for(i=0;i<o;i++)
        {   
            int b;
            scanf("%d",&b);
            if(b%2!=0)
            {
               m++; 
            }
        }
            if(m%2!=0)
            {
                m--;
            }
            printf("%d
",m/2);
        
        
    }
}