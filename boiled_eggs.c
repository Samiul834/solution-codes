#include <stdio.h>
int main()
{
    int t,n,p,q,egg=0,i,j,sum=0;
    scanf("%d",&t);
    for(int i=1;i<=t;i++){
        egg=0;
        sum=0;
        scanf("%d %d %d",&n,&p,&q);
        int ara[n];
        for(j=0;j<n;j++){
            scanf("%d",&ara[j]);
        }
        for(int k=0;k<n;k++){
            if(sum+ara[k]<=q){
                sum+=ara[k];
                egg++;
            }
            else{break;}
        }
        if(egg>p){
            printf("Case %d: %d\n",i,p);
        }
        else{
            printf("Case %d: %d\n",i,egg);
        }
    }
}