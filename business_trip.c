#include <stdio.h>
int main()
{
    int n,x,i,ara[12],j,temp,sum=0,count=0;
    scanf("%d",&n);

    for(i=0;i<12;i++){
        scanf("%d",&ara[i]);
    }
    for (i = 0; i < 12; i++) {
        for (j = 0; j < 12-i-1; j++) {
            if (ara[j] > ara[j+1]) {
                temp = ara[j];
                ara[j] = ara[j+1];
                ara[j+1] = temp;
            }
        }
    }
    for(int i=11;i>=0;i--){
        if(sum<n){
            sum+=ara[i];
            count++;
        }
        if(sum>=n){
            break;
        }
    }
    if(sum<n){
        printf("%d",-1);
    }
    else{
        printf("%d",count);
    }
    return 0;

}