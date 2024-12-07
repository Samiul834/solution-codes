#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--){
        int n, s, k;
        cin >> n >> s >> k;
        vector<int> closed(k);
        for (int i = 0; i < k; i++) {
            cin >> closed[i];
        }
        int distance = 0;
        while (true) {
            if (s-distance>0&&find(closed.begin(),closed.end(),s-distance)==closed.end()){
                cout << distance <<"\n";
                break;
            }
            if (s+distance<=n&&find(closed.begin(),closed.end(),s+distance)==closed.end()){
                cout << distance <<"\n";
                break;
            }
            distance++;
        }
    }
    return 0;
}
