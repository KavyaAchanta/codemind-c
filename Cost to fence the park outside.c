#include<stdio.h>
int main()
{
    int l,b,w,c,area,total_cost;
    scanf("%d%d%d%d",&l,&b,&w,&c);
    area=((l+2*w)*(b+2*w))-(l*b);
    total_cost=area*c;
    printf("%d",total_cost);
    return 0;
}