#include<stdio.h>
int main(){
    int n,i,sum=1;
    int  c;
    int a[3];              //mostly used 
    for(i=0;i<3;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<3;i++)
    {
        sum=sum*a[i];
    
    }
    
    c=sum*2*0.5;
    
printf("%dKB",c);

}

