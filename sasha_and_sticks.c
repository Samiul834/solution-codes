#include <stdio.h>
int main()
{
    long long int n,k,count;
    scanf("%lld %lld",&n,&k);

    count=n/k;

    if(count%2==1){
        printf("YES");
    }
    else{
        printf("NO");
    }
}