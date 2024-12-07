#include <stdio.h>
int main()
{
    int first,second,third,d1,d2,total,a,b,c;
    scanf("%d %d %d",&first,&second,&third);

    if(first>second&&first>third){
        a=first;
        if(second>third){
            b=second;
            c=third;
        }
        else{
            b=third;
            c=second;
        }
    }
    else if(second>third){
        a=second;
        if(first>third){
            b=first;
            c=third;
        }
        else{
            b=third;
            c=first;
        }
    }
    else{
        a=third;
        if(second>first){
            b=second;
            c=first;
        }
        else{
            b=first;
            c=second;
        }
    }
    d1=a-b;
    d2=b-c;
    total=d1+d2;
    printf("%d",total);

    return 0;
    
}