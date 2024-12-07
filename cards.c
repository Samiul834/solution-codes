#include <stdio.h>
void bubbleSort(int ara[], int index[],int n);
int main()
{
    int t,n;
    scanf("%d",&n);
    int ara[n],index[n];
    
    for(int i=0;i<n;i++){
        scanf("%d",&ara[i]);
        index[i]=i+1;
    }
    bubbleSort(ara,index,n);

    for (int i = 0; i < n / 2; i++) {
        printf("%d %d\n", index[i], index[n - i - 1]);
    }
}
void bubbleSort(int ara[],int index[] ,int n) {
    int i, j, temp;
    for (i = 0; i < n-1; i++) {
        for (j = 0; j < n-i-1; j++) {
            if (ara[j] > ara[j+1]) {
                temp = ara[j];
                ara[j] = ara[j+1];
                ara[j+1] = temp;

                temp = index[j];
                index[j] = index[j + 1];
                index[j + 1] = temp;
            }
        }
    }
}