#include <cstdio>
using namespace std;
int prime[] = {2,3,5,7,11,13,17,19,23,29,31,37,41};
int N, Case = 0, ans[20] = {1};
bool isPrime(int a)
{
    for (int n : prime)
        if (n == a) return true;
    return false;
}
void backtracking(int L, bool visit[])
{
    if (L == N) {
        if (!isPrime(ans[N-1] + 1))
            return;
        printf("1");
        for (int i = 1; i < N; ++i)
            printf(" %d", ans[i]);
        printf("\n");
        return;
    }
    for (int i = 2; i <= N; ++i) {
        if (visit[i]) continue;
        if (isPrime(i + ans[L - 1])) {
            visit[i] = 1;
            ans[L] = i;

            backtracking(L + 1, visit);

            visit[i] = 0;
        }
    }
}
int main()
{
    while (scanf("%d", &N) != EOF) {
        if (Case++) putchar('\n');
        printf("Case %d:\n", Case);
        bool visit[20] = {0};
        backtracking(1, visit);
    }
}