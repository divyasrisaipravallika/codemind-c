#include<stdio.h>
int main(){
int n,i,sum=0,d=0;
scanf("%d",&n);
int a[n];              //mostly used 
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{   if(a[i]%2==0){
  sum=sum+a[i];  
}
else{
    d=d+a[i];
    
}}
if(sum>d){    
printf("%d ",sum-d);
    
}
else
{
    printf("%d",d-sum);
}

}

