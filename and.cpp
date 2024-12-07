#include <iostream>
using namespace std;
const int MAX = 100001;
int main() {
    int n, x;
    cin >> n >> x;

    int a[MAX] = {0};         
    int transformed[MAX] = {0};
    int num;
    for (int i = 0; i < n; ++i) {
        cin >> num;
        a[num]++;
    }
    for (int i = 0; i < MAX; ++i) {
        if (a[i] > 1) {
            cout << 0 << endl;
            return 0;
        }
    }
    for (int i = 0; i < MAX; ++i) {
        if (a[i] > 0) {
            int transformed_value = i & x;
            if (transformed_value != i && a[transformed_value] > 0) {
                cout << 1 << endl;
                return 0;
            }
            transformed[transformed_value]++;
        }
    }
    for (int i = 0; i < MAX; ++i) {
        if (transformed[i] > 1) {
            cout << 2 << endl;
            return 0;
        }
    }
    cout << -1 << endl;
    return 0;
}
