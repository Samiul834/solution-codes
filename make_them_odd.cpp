#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; 
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        set<int> set_new;
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
            while (a[i] % 2 == 0) {
                set_new.insert(a[i]);
                a[i] /= 2;
            }
        }
        cout << set_new.size() << endl;
    }
    return 0;
}