#include <stdio.h>
int main()
{
    int n,j,i,t,x1,y1,x2,y2,p,m;
    scanf("%d",&t);

    for(int i=1;i<=t;i++){
       scanf("%d %d %d %d",&x1,&y1,&x2,&y2);
       scanf("%d",&n);
       printf("Case %d:\n",i);
       for(int j=0;j<n;j++){
            scanf("%d %d",&p,&m);
            if(p>x1&&p<x2&&m>y1&&m<y2){
                printf("Yes\n");
            }
            else{
                printf("No\n");
            }
       } 
    }
    return 0;
}