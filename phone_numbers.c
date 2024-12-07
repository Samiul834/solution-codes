#include <stdio.h>
#include <string.h>
int main()
{
    int eight=0,i,x,other=0,y;
    int n;
    scanf("%d",&n);
    char ara[n];
    scanf("%s",ara);

    x=strlen(ara);

    for(i=0;i<x;i++){
        if(ara[i]=='8'){
            eight++;
        }
        else{
            other++;
        }
    }
    if((eight+other)/11>=eight){
        printf("%d",eight);
        return 0;
    }
    else{
        y=(eight+other)/11;
        printf("%d",y);
    } 

}