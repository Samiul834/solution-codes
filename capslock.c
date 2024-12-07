#include <stdio.h>
#include <string.h>
int main()
{
    int x,i;
    char ara[101],ara2[101];
    scanf("%s",ara);
    x=strlen(ara);
    strcpy(ara2,ara);

    if(ara[0]>='a'&&ara[0]<='z'){
        for(i=1;i<x;i++){
            if(ara[i]>='a'&&ara[i]<='z'){
                printf("%s",ara2);
                return 0;
            }
        }
        ara[0]=ara[0]-32;

        for(i=1;i<x;i++){
            ara[i]=ara[i]+32;
        }
        printf("%s",ara);
    }
    else if(ara[0]>='A'&&ara[0]<='Z'){
        for(i=1;i<x;i++){
            if(ara[i]>='a'&&ara[i]<='z'){
                printf("%s",ara2);
                return 0;
            }
        }
        for(i=1;i<x;i++){
            ara[i]=ara[i]+32;
        }
        ara[0]=ara[0]+32;
        printf("%s",ara);
    }
    
    return 0;
}