#include <stdio.h>
#include <string.h>
int main()
{
    int x,i,count=0,num;
    char ara[5];
    scanf("%s",ara);
    x=strlen(ara);
    sscanf(ara,"%d",&num);

    for(i=0;i<x;i++){
        if(ara[i]!='7'&&ara[i]!='4'){
            count++;
        }
    }
    if(count==0){
        printf("YES");
    }
    else{
        if(num%7==0||num%4==0||num%47==0||num%74==0){
            printf("YES");
        }
        else{
            printf("NO");
        }

    }

    return 0;
}