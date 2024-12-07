#include <stdio.h>
int main()
{
    int n,i,sum=0,x=0;
    scanf("%d",&n);
    int ara[n];
    for(i=0;i<n;i++){
        scanf("%d",&ara[i]);
        if(ara[i]>x){
            x=ara[i];
        }
        sum+=ara[i];
    }
    sum=sum-(x/2);
    printf("%d",sum);
    return 0;
}