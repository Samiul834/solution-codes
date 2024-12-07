#include <stdio.h>
int main()
{
    int t,i;
    long long int a,b,x;
    scanf("%d",&t);
    
    for(i=0;i<t;i++){
        scanf("%lld %lld",&a,&b);
        x=a-b;
        if(x==1){
            printf("NO\n");
        }
        else{
            printf("YES\n");
        }
        
    }
}