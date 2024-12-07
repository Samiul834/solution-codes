#include <stdio.h>
int main()
{
    int t,n,i,j,x,temp,sum=0,flag=1;
    scanf("%d",&t);
    for(x=0;x<t;x++){
        scanf("%d",&n);
        int ara[n],flag=1,sum=0;
        for(int i=0;i<n;i++){
            scanf("%d",&ara[i]);
            if(ara[i]>2048){
                ara[i]=0;
            }
        }
        for (i = 0; i < n-1; i++) {
            for (j = 0; j < n-i-1; j++) {
                if (ara[j] > ara[j+1]) {
                    temp = ara[j];
                    ara[j] = ara[j+1];
                    ara[j+1] = temp;
                }
            }
        }
        for(int i=n-1;i>=0;i--){
            sum+=ara[i];
            if(sum==2048){
                printf("YES\n");
                flag=0;
                break;
            }
        }
        if(flag==1){
            printf("NO\n");
        }

    }
}