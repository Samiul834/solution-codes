#include <stdio.h>
int main()
{
    double a,t;
    int n,x;
    scanf("%d",&n);
    scanf("%lf %lf",&t,&a);
    double ara[n];
    for(int i=0;i<n;i++){
        scanf("%lf",&ara[i]);
    }
    for(int i=0;i<n;i++){
        ara[i]=(t-(ara[i]*.006))-a;
        if(ara[i]<0){
            ara[i]=ara[i]*-1;
        }
    }
    x=0;
    for(int i=0;i<n-1;i++){
        if(ara[i+1]<ara[x]){
            x=i+1;
        }
    }
    x++;
    printf("%d",x);

    return 0;
}