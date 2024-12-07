#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--) {
        long long A, B;
        cin >> A >> B;
        long long count = 0;
        for (long long b = 9; b <= B; b = b * 10 + 9) { 
            count += A;
        }
        cout << count <<"\n";
    }
    return 0;
}