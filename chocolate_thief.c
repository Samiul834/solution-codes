#include <stdio.h>
#include <string.h>
int main() {
    int T;
    scanf("%d", &T);

    for (int t = 1; t <= T; t++) {
        int n;
        scanf("%d", &n);

        int max_volume = -1, min_volume = 1000000;
        char thief[21], victim[21], name[21];
        int length, width, height;

        for (int i = 0; i < n; i++) {
            scanf("%s %d %d %d", name, &length, &width, &height);
            int volume = length * width * height;
            if (volume > max_volume) {
                max_volume = volume;
                strcpy(thief, name);
            }
            if (volume < min_volume) {
                min_volume = volume;
                strcpy(victim, name);
            }
        }
        printf("Case %d: ", t);
        if (max_volume == min_volume) {
            printf("no thief\n");
        } else {
            printf("%s took chocolate from %s\n", thief, victim);
        }
    }

    return 0;
}
