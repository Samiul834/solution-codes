#include <stdio.h>
int main()
{
    int i,j,n,temp;
    int odd=0,even=0,small=0,count=0;
    long long int total=0;
    scanf("%d",&n);
    int ara[n];
    for(int i=0;i<n;i++){
        scanf("%d",&ara[i]);
        if(ara[i]%2==0){
            even++;
        }
        else{
            odd++;
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
    int x=even-odd;
    if(x<0){
        x=-1*x;
    }
    if(x<2){
        printf("%d",0);
    }
    else{
        if(odd>even){
            for(int i=0;i<n;i++){
                if(ara[i]%2!=0){
                    total+=ara[i];count++;
                }
                if(count>=x-1){
                    break;
                }
            }
        }
        else{
            for(int i=0;i<n;i++){
                if(ara[i]%2==0){
                    total+=ara[i];count++;
                }
                if(count>=x-1){
                    break;
                }

            }
        }
        printf("%lld",total);
    }
}