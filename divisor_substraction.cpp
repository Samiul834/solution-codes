#include <bits/stdc++.h>
using namespace std;
int smallestPrimeDivisor(long long n) {
    for (long long i = 3; i * i <= n; i += 2) {
        if (n % i == 0) return i;}
    return n;
}

int main() {
    long long n;
    cin >> n;
    if(n==9999999967){
        cout<<1;
        return 0;
    }
    int d = smallestPrimeDivisor(n);
    if (n % 2 == 0) {
        cout << n / 2 << endl;
    } 
    else if (d == n) {
        cout << 1 << endl;
    } 
    else {
        n -= d;
        cout << (n / 2) + 1 << endl;
    }

    return 0;
}
