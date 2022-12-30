#include<stdio.h>
int main()
{
    int a,b,c,d;
    scanf("%d%d%d%d",&a,&b,&c,&d);
    int e,m;
    e=a-b;
    if(e*c<e*d){
    m=b*c+e*c;}
    else{
    m=b*c+e*d;
}
printf("%d",m);
    
}