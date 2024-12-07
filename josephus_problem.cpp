#include <bits/stdc++.h>
using namespace std;

int josephus(int n, int k) {
    int survivor = 0; 
    for (int i = 2; i <= n; i++) {
        survivor = (survivor + k) % i; 
    }
    
    return survivor;
}

int main() {
    int T;
    cin >> T;
    for (int t = 1; t <= T; t++) {
        int n, k;
        cin >> n >> k;
        int survivor = josephus(n, k);
        
        cout << "Case " << t << ": " << survivor + 1 << endl;
    }
    return 0;
}
