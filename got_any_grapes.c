#include <stdio.h>
int main()
{
    int a,b,c,x,y,z,left_green,left_total,for_b;
    scanf("%d %d %d",&x,&y,&z);
    scanf("%d %d %d",&a,&b,&c);

    if(a-x<0){
        printf("NO");
        return 0;
    }
    else{
        left_green=a-x;
    }

    for_b=left_green+b;
    if(for_b-y<0){
        printf("NO");
        return 0;
    }
    else{
        left_total=for_b+c-y;
    }

    if(left_total>=z){
        printf("YES");
    }
    else{
        printf("NO");
    }


}