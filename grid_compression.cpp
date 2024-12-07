#include <bits/stdc++.h>
using namespace std;

int main() {
    int h, w;
    cin >> h >> w;
    
    vector<string> grid(h);
    for (int i = 0; i < h; i++) {
        cin >> grid[i];
    }
    vector<int> validRow(h,0);
    for (int i = 0; i < h; i++) {
        if (grid[i].find('#') != string::npos) {
            validRow[i] = 1;
        }
    }
    vector<int> validCol(w,0);
    for (int j = 0; j < w; j++) {
        for (int i = 0; i < h; i++) {
            if (grid[i][j] == '#') {
                validCol[j] =1;
                break;
            }
        }
    }
    for (int i = 0; i < h; i++) {
        if (validRow[i]) {
            for (int j = 0; j < w; j++) {
                if (validCol[j]) {
                    cout << grid[i][j];
                }
            }
            cout << '\n';
        }
    }

    return 0;
}
