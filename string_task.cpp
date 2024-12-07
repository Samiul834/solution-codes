#include<bits/stdc++.h>
using namespace std;
int main()
{
    string word;
    cin >> word;
    int i,x;
    x=word.size();
    for(i=0;i<x;i++){
        if(word[i]>='A'&&word[i]<='Z'){
            word[i]+=32;
        }
        if(word[i]!='a'&&word[i]!='e'&&word[i]!='i'&&word[i]!='o'&&word[i]!='u'&&word[i]!='y'){
            cout << "."<<word[i];
        }
    }
}