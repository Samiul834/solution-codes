#include <stdio.h>
int main()
{
    int i,j,k,n,total=0;
    scanf("%d",&n);
    int ara[n];

    for(i=0;i<n;i++){
        scanf("%d",&ara[i]);
    }
    int highest=ara[0];

    for(j=1;j<n;j++){
        if(ara[j]>highest){
            highest=ara[j];
        }
    }

    for(k=0;k<n;k++){
        total=total+ara[k];
    }
    total=total-highest;
    if(highest<total){
        printf("YES");
    }
    else{
        printf("NO");
    }
    
}