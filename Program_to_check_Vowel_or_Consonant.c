#include<stdio.h>
int main()
{
    char c;
    scanf("%c",&c);
    if(c=='A'||c=='E'||c=='I'||c=='O'||c=='U'||c=='a'||c=='i'||c=='o'||c=='e'||c=='u')
    {
        printf("Vowel");
    }
    else
    {
        printf("Consonant");
    }
}