#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    long long m;
    cin >> n >> m;
    vector<long long> saved;
    long long sum_a = 0, sum_b = 0;

    for (int i = 0; i < n; i++) {
        long long a, b;
        cin >> a >> b;
        sum_a += a;
        sum_b += b;
        saved.push_back(a - b);
    }
    if (sum_b > m) {
        cout << -1 << endl;
        return 0;
    }
    if (sum_a <= m) {
        cout << 0 << endl;
        return 0;
    }
    sort(saved.rbegin(), saved.rend());
    int compressions = 0;
    
    for (int i = 0; i < saved.size(); i++) {
    sum_a -= saved[i];
    compressions++;
    if (sum_a <= m) {
        cout << compressions << endl;
        return 0;
    }
}
    return 0;
}
