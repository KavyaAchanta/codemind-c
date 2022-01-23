#include<stdio.h>
int main()
{
	int a,square,r,sum=0;
	scanf("%d",&a);
	square=a*a;
	while(square>0)
	{
		r=square%10;
		sum=sum+r;
		square=square/10;
    }
    if(sum==a)
      printf("Neon Number");
    else
        printf("Not Neon Number");
    
	return 0;
	
	
}