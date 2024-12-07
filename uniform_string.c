#include <stdio.h>
int main()
{
    int x,i,k,n;
    scanf("%d",&x);
    char ara[100];

    for(i=0;i<x;i++){
        scanf("%d %d",&n,&k);
        int count=0;

        for(int p=0;p<n;p++){
            printf("%c",97+count);
            count++;
            if(count==k){
                count=0;
            }
        }
        printf("\n");
    }
}