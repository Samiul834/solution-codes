#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long n, k;
        cin >> n >> k;
        
        long long max_candies = (n / k) * k + min(n % k, k / 2);
        
        cout << max_candies << '\n';
    }
    return 0;
}
