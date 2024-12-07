#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int x;
    x=s.size();

    if(x==1&&s[0]!='a'&&s[0]!='e'&&s[0]!='i'&&s[0]!='o'&&s[0]!='u'&&s[0]!='n'){
        cout<<"NO";
        return 0;
    }
    for(int i=0;i<x-1;i++){
        if(s[i]!='a'&&s[i]!='e'&&s[i]!='i'&&s[i]!='o'&&s[i]!='u'&&s[i]!='n'){
            if(s[i+1]!='a'&&s[i+1]!='e'&&s[i+1]!='i'&&s[i+1]!='o'&&s[i+1]!='u'){
                cout<<"NO";
                return 0;
            }
        }
    }
    if (s[x-1]!='a'&&s[x-1]!='e'&&s[x-1]!='i'&&s[x-1]!='o'&&s[x-1]!='u'&&s[x-1]!='n'){
        cout << "NO";
        return 0;
    }
    cout << "YES";
    return 0;
}