#include<stdio.h>

int main()
{
    int t;
    scanf("%d", &t);

    for (int k = 0; k < t; k++) {
        long long count = 0;
        int n, m;
        scanf("%d", &n);
        long long even1 = 0, odd1 = 0;
        for (int i = 0; i < n; i++) {
            int num;
            scanf("%d", &num);
            if (num % 2 == 0) {
                even1++;
            } else {
                odd1++;
            }
        }
        scanf("%d", &m);
        long long even2 = 0, odd2 = 0;
        for (int i = 0; i < m; i++) {
            int num;
            scanf("%d", &num);
            if (num % 2 == 0) {
                even2++;
            } else {
                odd2++;
            }
        }
        count = (even1 * even2) + (odd1 * odd2);
        printf("%lld\n", count); 
    }

    return 0;
}
