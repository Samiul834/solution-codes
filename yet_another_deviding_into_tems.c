#include <stdio.h>
int main()
{
    int t,n,x,i,j,k,y,temp,flag=1;
    scanf("%d",&t);
    for(k=0;k<t;k++){
        flag=1;
        scanf("%d",&n);
        int ara[n];
        for(y=0;y<n;y++){
            scanf("%d",&ara[y]);
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
        for(x=0;x<n-1;x++){
            if(ara[x+1]-ara[x]==1){
                flag=2;
            }
        }
        printf("%d\n",flag);
    }
    return 0;
}