#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<string> strings(n);
    for (int i = 0; i < n; ++i) {
        cin >> strings[i];
    }

    sort(strings.begin(), strings.end(), [](const string &a, const string &b) {
        return a.size() < b.size();});

    for (int i = 0; i < n - 1; ++i) {
        if (strings[i + 1].find(strings[i]) == string::npos) {
            cout << "NO" << endl;
            return 0;
        }
    }
    cout << "YES" << '\n';
    for (int i = 0; i < strings.size(); i++) {
    cout << strings[i] << '\n';
    }

    return 0;
}
