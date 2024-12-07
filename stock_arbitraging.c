#include <stdio.h>
int main()
{
    int buy,sell,money,x1,input1,x2,input2,times,remainder,output;
    scanf("%d %d %d",&buy,&sell,&money);
    scanf("%d",&x1);
    for(int i=0;i<buy-1;i++){
        scanf("%d",&input1);
        if(x1>input1){
            x1=input1;
        }
    }
    scanf("%d",&x2);
    for(int i=0;i<sell-1;i++){
        scanf("%d",&input2);
        if(x2<input2){
            x2=input2;
        }
    }
    if(x1>x2){
        printf("%d",money);
    }
    else{
        times=money/x1;
        remainder=money%x1;
        output=(x2*times)+remainder;
        printf("%d",output);
    }
}