#include <stdio.h>
int main()
{
   int i,j,x,n,temp,count=0;
   scanf("%d",&n);
   int ara1[n],ara2[n];
   for(int i=0;i<n;i++){
    scanf("%d",&ara1[i]);
    ara2[i]=ara1[i];        
   }
   for (i = 0; i < n-1; i++) {
        for (j = 0; j < n-i-1; j++) {
            if (ara1[j] > ara1[j+1]) {
                temp = ara1[j];
                ara1[j] = ara1[j+1];
                ara1[j+1] = temp;
            }
        }
    }
    if(ara1[0]==1){
        printf("1");
        return 0;
    }
    else{
        int flag=0;
        for(i=0;i<n;i++){
            for(j=0;j<n;j++){
                if(ara2[j]%ara1[i]==0){
                    ara2[j]=1;
                    flag=1;
                }
            }
            if(flag==1){
                count++;
            }
            flag=0;
        }
    }
    printf("%d",count);
    return 0;   
}