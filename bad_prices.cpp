#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        int bad_price_count = 0;
        int min_price = a[n - 1];
        for (int i = n - 2; i >= 0; i--) {
            if (a[i] > min_price) {
                bad_price_count++;
            }
            min_price = min(min_price, a[i]);
        }
        cout << bad_price_count << endl;
    }
    
    return 0;
}
