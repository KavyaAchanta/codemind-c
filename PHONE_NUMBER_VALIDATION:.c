#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    int n;
    scanf("%s",str);
    n=strlen(str);
    if(n==10)
     printf("Valid");
    else if(str[0]==0)
     printf("Invalid");
    else
     printf("Invalid");
}