#include<stdio.h>
int main()
{
    int n,k,i,j;
    scanf("%d",&n);
    while(n--)
    {
        scanf("%d",&k);
        char a[k];
        scanf("%s",a);
        int c=0;
        for(i=0;i<k;i++)
        {  
            for(j=i;j<k;j++)
            {
                
            
            if(a[i]=='1' && a[j]=='1')
            {
                c++;
            }
            }
        }
            printf("%d
",c);
        
    }
}