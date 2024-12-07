#include <stdio.h>
int main()
{
    int i,j,temp,n,t=0;
    scanf("%d",&n);
    int buy[n],sell[n],profit[n];
    for(i=0;i<n;i++){
        scanf("%d",&buy[i]);
    }
    for(i=0;i<n;i++){
        scanf("%d",&sell[i]);
    }
    for(i=0;i<n;i++){
        profit[i]=buy[i]-sell[i];
    }
    for (int i = 0; i < n-1; i++) {
        for (j = 0; j < n-i-1; j++) {
            if (profit[j] > profit[j+1]) {
                temp = profit[j];
                profit[j] = profit[j+1];
                profit[j+1] = temp;
            }
        }
    }
    for(int i=0;i<n;i++){
        if(profit[i]>0){
            t=t+profit[i];
        }
    }
    printf("%d",t);
    
}