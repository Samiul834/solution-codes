#include<stdio.h>
#include<math.h>
int merge(int a, int b);
int main()
{
    int a,b,t,x,conc,count=0;
    scanf("%d",&t);
    for(int l=0;l<t;l++){
        scanf("%d %d",&a,&b);       
        for(int i=1;i<=a;i++){
            for(int j=1;j<=b;j++){
                x=i+j+i*j;
                conc=merge(i,j);
                if(x==conc){
                    count++;
                }
            }
        }
        printf("%d\n",count);
        count=0;
    }
}
int merge(int a, int b) {
    int temp = b;
    int digits = 1;

    while (temp >= 10) {
        temp /= 10;
        digits *= 10;
    }
    return a * digits * 10 + b;
}