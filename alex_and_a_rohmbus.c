#include <stdio.h>
int main()
{
    int n,x,i,side=1;
    scanf("%d",&n);
    x=n-1;
    side=(x*x)+(n*n);

    printf("%d",side);
}