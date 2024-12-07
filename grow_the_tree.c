#include <stdio.h>
#include <stdlib.h>
int compare(const void *a, const void *b) {
    return (*(int *)a - *(int *)b);
}
int main()
{
    int n,j,i,temp,x;
    long long int total=0,n1=0,n2=0,ans;
    scanf("%d",&n);
    int ara[n];
    for(i=0;i<n;i++){
        scanf("%d",&ara[i]);
        total+=ara[i];
    }
    qsort(ara, n, sizeof(int), compare);
    x=n/2;
    for(int i=0;i<x;i++){
        n1+=ara[i];
    }
    n2=total-n1;
    ans=(n1*n1)+(n2*n2);
    printf("%lld",ans);

}