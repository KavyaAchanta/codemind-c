#include<stdio.h>
int main()
{
    int n,r=0,sum=0,num,temp;
    scanf("%d",&n);
    num=n;
    while(num>0)
    {
        r=num%10;
        sum=sum+r;
        num=num/10;
    }
    temp=n%sum;
    if(temp==0)
    printf("True");
    else
    printf("False");
    return 0;
}