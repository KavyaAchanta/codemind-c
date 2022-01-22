#include<stdio.h>
int main()
{
    int l,b,w,c,area,total_cost;
    scanf("%d%d%d%d",&l,&b,&w,&c);
    if(l<=2*w || b<=2*w)
    {
       printf("Impossible");
    }
    else
    {
       area=(l*b)-((l-2*w)*(b-2*w));
       total_cost=area*c;
       printf("%d",total_cost);
    }
    return 0;
}