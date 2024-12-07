#include <stdio.h>
int main()
{
    int x,i,n,y,t,line=0;
    scanf("%d",&n);

    for(i=0;i<n;i++){
        scanf("%d %d",&x,&y);
        t=x+y;
        if(t>line){
            line=t;
        }

    }
    printf("%d",line);
}