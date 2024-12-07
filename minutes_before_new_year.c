#include <stdio.h>
int main()
{
    int t,hour,minute,left;
    scanf("%d",&t);

    for(int i=0;i<t;i++){
        scanf("%d %d",&hour,&minute);
        left=(24-hour)*60-minute;
        printf("%d\n",left);
    }
    return 0;
}