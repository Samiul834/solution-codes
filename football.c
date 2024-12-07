#include <stdio.h>
#include <string.h>
int main()
{
    int x,i,y;
    char ara[105];
    int count_zero=0,count_one=0;
    scanf("%s",ara);
    y=strlen(ara);
    
    for(i=0;i<y;i++){
        if(ara[i]=='0'){
            count_zero=1;
            for(x=1;x<7&&(i+x)<y;x++){
                if(ara[x+i]=='0'){
                    count_zero++;
                }
                else{
                    break;
                }
                if(count_zero>=7){
                    printf("YES");
                    return 0;
                }
            }
        }
        else if(ara[i]=='1'){
            count_one=1;
            for(x=1;x<7&&(i+x)<y;x++){
                if(ara[x+i]=='1'){
                    count_one++;
                }
                else{
                    break;
                }
                if(count_one>=7){
                    printf("YES");
                    return 0;
                }
            }
        }
    }
    printf("NO");
    return 0;
}