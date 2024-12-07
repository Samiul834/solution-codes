#include <stdio.h>
#include <math.h>
int binaryToDecimal(int binary) {
    int decimal = 0, base = 1;
    while (binary > 0) {
        decimal += (binary % 10) * base;
        binary /= 10;
        base *= 2;
    }
    return decimal;
}

int main() {
    int T;
    scanf("%d", &T);
    for (int t = 1; t <= T; t++) {
        int a, b, c, d;
        int bin_a, bin_b, bin_c, bin_d;
        scanf("%d.%d.%d.%d", &a, &b, &c, &d);
        scanf("%d.%d.%d.%d", &bin_a, &bin_b, &bin_c, &bin_d);
        int dec_a = binaryToDecimal(bin_a);
        int dec_b = binaryToDecimal(bin_b);
        int dec_c = binaryToDecimal(bin_c);
        int dec_d = binaryToDecimal(bin_d);
        if (a == dec_a && b == dec_b && c == dec_c && d == dec_d) {
            printf("Case %d: Yes\n", t);
        } else {
            printf("Case %d: No\n", t);
        }
    }

    return 0;
}
