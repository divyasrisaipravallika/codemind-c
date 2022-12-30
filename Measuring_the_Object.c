#include<stdio.h>
int main()
{
    int a,b,c,d;
    scanf("%d%d%d%d",&a,&b,&c,&d);
    if(a==b+c || a==c+d || a==b+c+d|| a==b||a==c||a==d|| a==d+b)
    {
        printf("YES");
        
    }
    else
{
    printf("NO");
}
    
}