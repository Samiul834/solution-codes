#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    for (int i = 1; i <= t; i++) {
        long long a, b;
        cin >> a >> b;

        long long x = a - b, y = b + 1;
        cout << "Case " << i << ": ";

        if (x <= b) {
            cout << "impossible\n";
            continue;
        }

        vector<long long> divisors;
        for (long long j = 1; j * j <= x; j++) {
            if (x % j == 0) {
                if (j > b) divisors.push_back(j);
                if (x / j > b && x / j != j) divisors.push_back(x / j);
            }
        }

        if (divisors.empty()) {
            cout << "impossible\n";
        } else {
            sort(divisors.begin(), divisors.end());
            for (size_t j = 0; j < divisors.size(); j++) {
                if (j) cout << " ";
                cout << divisors[j];
            }
            cout << "\n";
        }
    }

    return 0;
}
