#include <stdio.h>
int main()
{
    int n,i,x=0,pair,count=0;
    scanf("%d",&n);
    char ara[n][n];

    for(i=0;i<n;i++){
        for(int j=0;j<n;j++){
            scanf(" %c",&ara[i][j]);
        }
    }
    for(i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(ara[i][j]=='C'){
                x++;
            }
        }
        pair=(x*(x-1))/2;
        count+=pair;
        x=0;
    }
    for(int j=0;j<n;j++){
        for(i=0;i<n;i++){
            if(ara[i][j]=='C'){
                x++;
            }
        }
        pair=(x*(x-1))/2;
        count+=pair;
        x=0;
    }
    printf("%d",count);

}