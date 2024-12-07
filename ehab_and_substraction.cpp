#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,i,x,j=0;
    cin>>n>>k;
    int a[n];
    for(int k=0;k<n;k++){
        cin>>a[k];
    }
    sort(a,a+n);
    int total_reduction = 0;
    int operations = 0;
    for (int i = 0; i < n; ++i) {
        if (a[i] > total_reduction) {
            cout << a[i] - total_reduction <<"\n";
            total_reduction = a[i];
            operations++;

            if (operations == k) {
                return 0;
            }
        }
    }
    for (int i = operations; i < k; ++i) {
        cout << 0 <<"\n";
    }

    return 0;
}
