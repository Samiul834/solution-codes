#include <stdio.h>
int main()
{
    int x,i,j,t,n,p=1;
    scanf("%d",&t);
    for(i=0;i<t;i++){
        p=2;
        scanf("%d %d",&n,&x);
        if(x<=n){
            printf("YES\n");
        }
        else{
            while((p*p)<=x){  
                if(x%p!=0){
                    j=(x/p+1)+1;
                }
                else{
                    j=x/p+1;
                }
                if((j+p)<=n){
                    printf("YES\n");
                    break;
                }
                else{
                    printf("NO\n");
                    break;
                }
            }
        }
    }
    return 0;
}