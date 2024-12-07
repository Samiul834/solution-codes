#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,t,x,n,a,b,c,d;
    cin >> n ;
    string word;
    cin >> word;
    for(i=0;i<n-3;i++){
        a = min(abs(65 - word[i]), 26 - abs(65 - word[i]));    
        b = min(abs(67 - word[i + 1]), 26 - abs(67 - word[i + 1])); 
        c = min(abs(84 - word[i + 2]), 26 - abs(84 - word[i + 2])); 
        d = min(abs(71 - word[i + 3]), 26 - abs(71 - word[i + 3]));
         x=a+b+c+d;
        if(i==0) t=x;
        if(x<t) t=x;
        
    }
    cout << t;
}