#include <stdio.h>
int main()
{
    double s,t=1,i;
    double money=0;
    scanf("%lf",&s);
    for(i=s;i>0;i--){
        money+=(t/i);
    }
    printf("%.12lf",money);
}