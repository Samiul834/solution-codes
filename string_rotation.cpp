#include<bits/stdc++.h>
using namespace std;
int main()
{
    string S, T;
    cin >> S >> T;
    if((S+S).find(T)!=string::npos) {
        cout << "Yes";
    } else {
        cout << "No";
    }
    return 0;
}