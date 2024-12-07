#include <stdio.h>
int main()
{
    int cards,i,j,x,a=0,b=0;
    scanf("%d",&cards);
    int ara[cards];
    int left=0,right=cards-1;

    for(i=0;i<cards;i++){
        scanf("%d",&ara[i]);
    }

    int turn =0;
    while(left<=right){
        if (ara[left] > ara[right]) {
                    if (turn == 0) {
                        a += ara[left];
                    } else {
                        b += ara[left];
                    }
                    left++;
                } else {
                    if (turn == 0) {
                        a += ara[right];
                    } else {
                        b += ara[right];
                    }
                    right--;
                }
             turn = 1 - turn;
    }
    
    printf("%d %d\n", a, b);    

}