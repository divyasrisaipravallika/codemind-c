#include<stdio.h>
int main()
{ 
    int i,c=0,n,b=0;
     scanf("%d",&n); 
     int a[n];
     for(i=0;i<n;i++)
     { 
         scanf("%d",&a[i]);
     }
     c=0;
     for(i=0;i<n;i++)
     { 
         if(i%2!=0) 
         { 
             if(a[i]%2!=0)c++; 
         } 
    if(a[i]%2!=0)b++; 
         
     }
     if(c==b)
     { 
         printf("True"); 
         
     } 
     else {
         printf("False"); 
         
     }
   }