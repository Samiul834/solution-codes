#include <stdio.h>
int main()
{
    int a,b,i,n,flag1=0,flag2=0;
    scanf("%d",&n);
    a=n;
    while(1){
        b=a+n;
        flag1=0;
        flag2=0;
        for(i=2;i<=a/2;i++){
            if(a%i==0){
                flag1=1;
                break;
            }
        }
        for(i=2;i<=b/2;i++){
            if(b%i==0){
                flag2=1;
                break;
            }
        }
        if(flag1==1&&flag2==1){
            break;
        }
        a=a+1;
    }
    printf("%d %d",b,a);
}