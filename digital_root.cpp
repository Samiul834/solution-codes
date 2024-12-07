#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    
    while (n--) {
        long long k, x;
        cin >> k >> x;
        long long result = x + (k - 1) * 9;
        
        cout << result <<"\n";
    }
    
    return 0;
}