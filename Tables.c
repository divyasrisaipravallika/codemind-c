#include<stdio.h>
int main()
{
    int i,n,j,m,o;
    scanf("%d%d",&n,&m);
    for(i=1;i<=m;i++)
    {
        
        
            if(i%2!=0)
            { o=i*n;
                printf("%d x %d = %d
",n,i,o);
            }
        
    }
}