#include <stdio.h>
#include <string.h>
int main()
{
    int n,x,i;
    scanf("%d",&n);
    char ara[10001];
    scanf("%s",ara);
    x=strlen(ara);
    for(i=0;i<x;i++){
        ara[i]+=n;
        if(ara[i]>'Z'){
            ara[i]=ara[i]-26;
        }
        printf("%c",ara[i]);
    }
}