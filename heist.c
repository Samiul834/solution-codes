#include <stdio.h>
void bubbleSort(int ara[], int n);
int main()
{
    int x,i,n,j=0,count=0,flag=0;
    scanf("%d",&n);
    int ara[n];
 
    for(int i=0;i<n;i++){
        scanf("%d",&ara[i]);
    }
    bubbleSort(ara, n);
    x=ara[0];
 
    for(x=ara[0];x<=ara[n-1];x++){
        if(ara[j]==x){
            j++;
        }
        else{
            count++;
        }
    }
    printf("%d",count);
    return 0;
}
void bubbleSort(int ara[], int n) {
    int i, j, temp;
    for (i = 0; i < n-1; i++) {
        for (j = 0; j < n-i-1; j++) {
            if (ara[j] > ara[j+1]) {
                temp = ara[j];
                ara[j] = ara[j+1];
                ara[j+1] = temp;
            }
        }
    }
}