#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d%d",&i,&n);
    if((i>0 || n%2==0) && i%2==0)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
}