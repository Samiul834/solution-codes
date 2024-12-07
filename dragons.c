#include <stdio.h>
int main()
{
    int s,n,i,j,x,temp;
    scanf("%d %d",&s,&n);
    int ara1[n],ara2[n];
    for(int i=0;i<n;i++){
        scanf("%d %d",&ara1[i],&ara2[i]);   
    }
    for (i = 0; i < n-1; i++) {
        for (j = 0; j < n-i-1; j++) {
            if (ara1[j] > ara1[j+1]) {
                temp = ara1[j];
                ara1[j] = ara1[j+1];
                ara1[j+1] = temp;
                temp = ara2[j];
                ara2[j] = ara2[j+1];
                ara2[j+1] = temp;
            }
        }
    }
    for(int i=0;i<n;i++){
        if(s>ara1[i]){
            s+=ara2[i];
        }
        else{
            printf("NO");
            return 0;
        }
    }
    printf("YES");
    return 0;
}