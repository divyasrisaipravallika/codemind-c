#include<stdio.h>
int main()
{
    int n,i,j=0,o=1,m;
    scanf("%d",&n);
    while(n!=0){
        m=n%10;
        j=j+m;
        o=o*m;
        n/=10;
        
    }
    printf("%d",o-j);
}