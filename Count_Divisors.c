#include<stdio.h>
int main()
{
    int l,r,k,i,is_divisible,count=0;
    scanf("%d%d%d",&l,&r,&k);
    for(i=l;i<=r;i++)
    {
        if(i%k==0)
        {
            count++;
        }
    }
    printf("%d",count);

    return 0;
}
