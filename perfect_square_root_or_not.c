#include<stdio.h>
#include<math.h>
int main()
{
    int n;
    float f,g;
    scanf("%d",&n);
    f=sqrt(n);
    g=(int)f;
    if(f==g)
    printf("True");
    else
    printf("False");
    return 0;
    
}