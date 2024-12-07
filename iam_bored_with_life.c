#include <stdio.h>
int main()
{
   int a,b,factorial=1;
   scanf("%d %d",&a,&b);
   if(a>=b){
        for(int i=b;i>1;i--){
           factorial =factorial*i;
        }
    }
    else{
        for(int i=a;i>1;i--){
            factorial=factorial*i;
        }
    }
    printf("%d",factorial);
}