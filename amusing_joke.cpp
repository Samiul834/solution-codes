#include<bits/stdc++.h>
using namespace std;
int main()
{
    string string1,string2,string3,total;
    cin >> string1;
    cin >> string2;
    cin >> string3;
    total=string1.append(string2);
    sort(string3.begin(),string3.end());
    sort(total.begin(),total.end());
    int x=total.size();
    int y=string3.size();
    if(x!=y){
        cout <<"NO";
        return 0;
    }
    for(int i=0;i<x;i++){
        if(total[i]!=string3[i]){
            cout << "NO";
            return 0;
        }
    }
    cout << "YES";
    return 0;
}