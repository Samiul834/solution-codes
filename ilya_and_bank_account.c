#include <stdio.h>
int main()
{
    int balance,x,i,last,second_last;
    scanf("%d",&balance);

    if(balance>0){
        printf("%d",balance);
    }
    else{
        last=(0-balance)%10;
        x=balance/10;
        second_last=(0-x)%10;

        if(last>second_last){
            balance=x;
            printf("%d",balance);
        }
        else{
            balance=balance/100;
            i=balance*10-last;
            printf("%d",i);
        }

    }
    return 0;
}