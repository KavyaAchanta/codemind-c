#include<stdio.h>
int main()
{
    int n,th,amnt=0;
    scanf("%d",&n);
    int ar[n],i;
    for(i=0;i<n;i++)
    {
      scanf("%d",&ar[i]);
    }
    scanf("%d",&th);
    for(i=0;i<n;i++)
    {
        if(ar[i]<=th)
        amnt=amnt+1;
        else if(ar[i]>th)
        amnt=amnt+2;
        
    }
    printf("%d",amnt);
    return 0;
}