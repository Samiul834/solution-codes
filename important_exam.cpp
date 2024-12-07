#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>> n>>m;
    vector<string> ans(n);
    for(int i=0;i<n;i++){
        cin>>ans[i];
    }
    vector<int> points(m);
    for(int i=0;i<m;i++){
        cin>>points[i];
    }
    int total=0;
    for(int j=0;j<m;j++){
        vector<int> number(5,0);

        for(int i=0;i<n;i++){
            number[ans[i][j]-'A']++;
        }
        int max= *max_element(number.begin(),number.end());
        total+=max*points[j];
    }
    cout<<total<<"\n";
    return 0;
}