#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int ar[n],i,j,count=0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&ar[i]);
    }
    for(i=0;i<n;i++)
    {
        if(ar[i]%2==0)
        {
            if(i%2==0)
            {
                count=0;
            }
            else 
            {
                count=1;
            }
        }
    }
    if(count!=1)
     printf("True
");
    else
     printf("False");
    return 0; 
}