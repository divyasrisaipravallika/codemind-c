#include<stdio.h>
#include<math.h>
int main()
{ 
double p,r,t;
double n;
scanf("%lf%lf%lf",&p,&r,&t); 
n=p*pow((1+(r/100)),t);
printf("%0.2lf",n);}