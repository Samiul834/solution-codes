#include <stdio.h>
int main()
{
    int n,candy,count=1,total=0,i,j;
    scanf("%d %d",&n,&candy);

    for(i=1;i<=n;i++){
        total=total+i;
        if((n-count)==(total-candy)){
            printf("%d",total-candy);
            return 0;
        }
        count++;
    }
}