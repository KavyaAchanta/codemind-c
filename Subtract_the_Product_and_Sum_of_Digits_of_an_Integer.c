#include<stdio.h>
int main()
{
	int r,n,mul=1,sum=0,result;
	scanf("%d",&n);
	while(n>0)
	{
		r=n%10;
		mul*=r;
		sum=sum+r;
		n=n/10;
    }
    result=mul-sum;
	printf("%d ",result);
	return 0;
	
	
}