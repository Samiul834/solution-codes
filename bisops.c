#include <stdio.h>
int main()
{
    int t,r1,c1,r2,c2,i,j;
    scanf("%d",&t);
    
    for(i=1;i<=t;i++){
        scanf("%d %d %d %d",&r1,&c1,&r2,&c2);
        int first=r1-r2,second=c1-c2;
        if(first<0) first=first*-1;
        if(second<0) second=second*-1;
        
        if(first==second){
            printf("Case %d: %d\n",i,1);
        }
        else if ((r1 + c1) % 2 != (r2 + c2) % 2) {
            printf("Case %d: impossible\n",i);
        }
        else{
            printf("Case %d: %d\n",i,2);
        }
    }
}