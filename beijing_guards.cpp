#include <bits/stdc++.h>
#define int long long
using namespace std;
const int N = 1e5 + 10;
int n, a[N];

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
    while (cin >> n) {
        if (!n) return 0;
        int s = 0,ans=0;
        for (int i = 1; i <= n; i++) {
            cin >> a[i];
            s += a[i];
            a[n+1]=a[1];
        }
        int p = ceil(1.0 * s / (int)(n / 2));
        if (n == 1) 
            cout << a[1] << "\n";
        else {
            for (int i = 1; i <= n; i++){
                ans=max(ans,max(a[i]+a[i+1],p));
                cout<<ans<<"\n";
            }
        }
    }
    return 0;
}
