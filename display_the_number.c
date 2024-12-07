#include <stdio.h>
int main()
{
    int x,i,n,t;
    scanf("%d",&t);
    for(i=0;i<t;i++){
        scanf("%d",&n);
        if(n%2==1){
            x=(n-3)/2;
            printf("7");
            for(int i=1;i<=x;i++){
                printf("%d",1);
            }
        }
        else{
            x=n/2;
            for(int i=0;i<x;i++){
                printf("%d",1);
            }
        }
        printf("\n");
    }
    return 0;
}