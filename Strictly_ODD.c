#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int ar[n],i,count=0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&ar[i]);
    }
    for(i=0;i<n;i++)
    {
        if(ar[i]%2!=0 && i%2==0)
        {
            count=0;
            break;
        }
        else
        {
            count=1;
        }
    }
    if(count==0)
     printf("False");
    else
     printf("True");
    return 0; 
}